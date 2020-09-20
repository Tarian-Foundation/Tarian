// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2015 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2020 The TARIAN developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "chainparams.h"

#include "chainparamsseeds.h"
#include "consensus/merkle.h"
#include "util.h"
#include "utilstrencodings.h"

#include <boost/assign/list_of.hpp>

#include <assert.h>

static CBlock CreateGenesisBlock(const char* pszTimestamp, const CScript& genesisOutputScript, uint32_t nTime, uint32_t nNonce, uint32_t nBits, int32_t nVersion, const CAmount& genesisReward)
{
    CMutableTransaction txNew;
    txNew.nVersion = 1;
    txNew.vin.resize(1);
    txNew.vout.resize(1);
    txNew.vin[0].scriptSig = CScript() << 486604799 << CScriptNum(4) << std::vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
    txNew.vout[0].nValue = genesisReward;
    txNew.vout[0].scriptPubKey = genesisOutputScript;

    CBlock genesis;
    genesis.vtx.push_back(txNew);
    genesis.hashPrevBlock.SetNull();
    genesis.nVersion = nVersion;
    genesis.nTime    = nTime;
    genesis.nBits    = nBits;
    genesis.nNonce   = nNonce;
    genesis.hashMerkleRoot = BlockMerkleRoot(genesis);
    return genesis;
}

/**
 * Build the genesis block. Note that the output of the genesis coinbase cannot
 * be spent as it did not originally exist in the database.
 *
 * CBlock(hash=00000ffd590b14, ver=1, hashPrevBlock=00000000000000, hashMerkleRoot=e0028e, nTime=1390095618, nBits=1e0ffff0, nNonce=28917698, vtx=1)
 *   CTransaction(hash=e0028e, ver=1, vin.size=1, vout.size=1, nLockTime=0)
 *     CTxIn(COutPoint(000000, -1), coinbase 04ffff001d01044c5957697265642030392f4a616e2f3230313420546865204772616e64204578706572696d656e7420476f6573204c6976653a204f76657273746f636b2e636f6d204973204e6f7720416363657074696e6720426974636f696e73)
 *     CTxOut(nValue=50.00000000, scriptPubKey=0xA9037BAC7050C479B121CF)
 *   vMerkleTree: e0028e
 */
static CBlock CreateGenesisBlock(uint32_t nTime, uint32_t nNonce, uint32_t nBits, int32_t nVersion, const CAmount& genesisReward)
{
    const char* pszTimestamp = "";
    const CScript genesisOutputScript = CScript() << ParseHex("04678afdb0fe5548271967f1a67130b7105cd6a828e03909a67962e0ea1f61deb649f6bc3f4cef38c4f35504e51ec112de5c384df7ba0b8d578a4c702b6bf11d5f") << OP_CHECKSIG;
    return CreateGenesisBlock(pszTimestamp, genesisOutputScript, nTime, nNonce, nBits, nVersion, genesisReward);
}

/**
 * Main network
 */
/**
 * What makes a good checkpoint block?
 * + Is surrounded by blocks with reasonable timestamps
 *   (no blocks before with a timestamp after, none after with
 *    timestamp before)
 * + Contains no strange transactions
 */
static Checkpoints::MapCheckpoints mapCheckpoints =
    boost::assign::map_list_of
    (0, uint256S("000002301ce038d4bcf0d6ef41844463b0be300888b85da7b936073d02944c99"));

static const Checkpoints::CCheckpointData data = {
    &mapCheckpoints,
    1600458983, // * UNIX timestamp of last checkpoint block
    0,          // * total number of transactions between genesis and last checkpoint
    3000};      // * estimated number of transactions per day after checkpoint

static Checkpoints::MapCheckpoints mapCheckpointsTestnet =
    boost::assign::map_list_of
    (0, uint256S("0x001"));

    static const Checkpoints::CCheckpointData dataTestnet = {
    &mapCheckpointsTestnet,
    1600458983,
    0,
    250};

static Checkpoints::MapCheckpoints mapCheckpointsRegtest =
    boost::assign::map_list_of
    (0, uint256S("0x001"));

static const Checkpoints::CCheckpointData dataRegtest = {
    &mapCheckpointsRegtest,
    1600458983,
    0,
    100};

class CMainParams : public CChainParams
{
public:
    CMainParams()
    {
        networkID = CBaseChainParams::MAIN;
        strNetworkID = "main";

        genesis = CreateGenesisBlock(1600458983, 1112032, 0x1e0ffff0, 1, 250 * COIN);
        consensus.hashGenesisBlock = genesis.GetHash();
        assert(consensus.hashGenesisBlock == uint256S("0x000002301ce038d4bcf0d6ef41844463b0be300888b85da7b936073d02944c99"));
        assert(genesis.hashMerkleRoot == uint256S("0x148723258586946f5463cf095941823596a831f897260dbcbb3670529b028c5f"));

        consensus.fPowAllowMinDifficultyBlocks           = false;
        consensus.powLimit                               = ~UINT256_ZERO >> 20;    // Tarian starting difficulty is 1 / 2^12
        consensus.posLimitV1                             = ~UINT256_ZERO >> 24;
        consensus.posLimitV2                             = ~UINT256_ZERO >> 20;
        consensus.nBudgetCycleBlocks                     = 43200;                  // approx. 1 every 30 days
        consensus.nBudgetFeeConfirmations                = 6;                      // Number of confirmations for the finalization fee
        consensus.nCoinbaseMaturity                      = 100;
        consensus.nFutureTimeDriftPoW                    = 7200;
        consensus.nFutureTimeDriftPoS                    = 180;
        consensus.nMasternodeCountDrift                  = 20;                     // num of MN we allow the see-saw payments to be off by
        consensus.nMaxMoneyOut                           = 10191520 * COIN;
        consensus.nPoolMaxTransactions                   = 3;
        consensus.nProposalEstablishmentTime             = 60 * 60 * 24;           // must be at least a day old to make it into a budget
        consensus.nStakeMinAge                           = 60 * 60;
        consensus.nStakeMinDepth                         = 600;
        consensus.nTargetTimespan                        = 40 * 60;
        consensus.nTargetTimespanV2                      = 30 * 60;
        consensus.nTargetSpacing                         = 1 * 60;
        consensus.nTimeSlotLength                        = 15;

        // spork keys
        consensus.strSporkPubKey                         = "040F129DE6546FE405995329A887329BED4321325B1A73B0A257423C05C1FCFE9E40EF0678AEF59036A22C42E61DFD29DF7EFB09F56CC73CADF64E05741880E3E7";
        consensus.strSporkPubKeyOld                      = "";
        consensus.nTime_EnforceNewSporkKey               = 0;
        consensus.nTime_RejectOldSporkKey                = 0;

        // height-based activations
        consensus.height_last_ZC_AccumCheckpoint         = 0;
        consensus.height_last_ZC_WrappedSerials          = 0;
        consensus.height_start_InvalidUTXOsCheck         = 999999999;
        consensus.height_start_ZC_InvalidSerials         = 0;
        consensus.height_start_ZC_SerialRangeCheck       = 999999999;
        consensus.height_ZC_RecalcAccumulators           = 999999999;

        // validation by-pass
        consensus.nTarianBadBlockTime                    = 1471401614;    // Skip nBit validation of Block 259201 per PR #915
        consensus.nTarianBadBlockBits                    = 0x1c056dac;    // Skip nBit validation of Block 259201 per PR #915

        // Zerocoin-related params
        consensus.ZC_Modulus                             = "25195908475657893494027183240048398571429282126204032027777137836043662020707595556264018525880784"
                                                           "4069182906412495150821892985591491761845028084891200728449926873928072877767359714183472702618963750149718246911"
                                                           "6507761337985909570009733045974880842840179742910064245869181719511874612151517265463228221686998754918242243363"
                                                           "7259085141865462043576798423387184774447920739934236584823824281198163815010674810451660377306056201619676256133"
                                                           "8441436038339044149526344321901146575444541784240209246165157233507787077498171257724679629263863563732899121548"
                                                           "31438167899885040445364023527381951378636564391212010397122822120720357";

        consensus.ZC_MaxPublicSpendsPerTx                = 637;         // Assume about 220 bytes each input
        consensus.ZC_MaxSpendsPerTx                      = 7;           // Assume about 20kb each input
        consensus.ZC_MinMintConfirmations                = 20;
        consensus.ZC_MinMintFee                          = 1 * CENT;
        consensus.ZC_MinStakeDepth                       = 200;
        consensus.ZC_TimeStart                           = 1508214600;  // October 17, 2017 4:30:00 AM
        consensus.ZC_WrappedSerialsSupply                = 0 * COIN;    // zerocoin supply at height_last_ZC_WrappedSerials

        // Network upgrades
        consensus.vUpgrades[Consensus::BASE_NETWORK].nActivationHeight          = Consensus::NetworkUpgrade::ALWAYS_ACTIVE;
        consensus.vUpgrades[Consensus::UPGRADE_TESTDUMMY].nActivationHeight     = Consensus::NetworkUpgrade::NO_ACTIVATION_HEIGHT;
        consensus.vUpgrades[Consensus::UPGRADE_POS].nActivationHeight           = 5001;
        consensus.vUpgrades[Consensus::UPGRADE_POS_V2].nActivationHeight        = 5010;
        consensus.vUpgrades[Consensus::UPGRADE_ZC].nActivationHeight            = 5050;
        consensus.vUpgrades[Consensus::UPGRADE_ZC_V2].nActivationHeight         = 5100;
        consensus.vUpgrades[Consensus::UPGRADE_BIP65].nActivationHeight         = Consensus::NetworkUpgrade::ALWAYS_ACTIVE;
        consensus.vUpgrades[Consensus::UPGRADE_ZC_PUBLIC].nActivationHeight     = 6000;
        consensus.vUpgrades[Consensus::UPGRADE_V3_4].nActivationHeight          = 5300;
        consensus.vUpgrades[Consensus::UPGRADE_V4_0].nActivationHeight          = 5400;
        consensus.vUpgrades[Consensus::UPGRADE_V5_DUMMY].nActivationHeight      = Consensus::NetworkUpgrade::NO_ACTIVATION_HEIGHT;

        consensus.vUpgrades[Consensus::UPGRADE_ZC].hashActivationBlock          = uint256S("0x1");
        consensus.vUpgrades[Consensus::UPGRADE_ZC_V2].hashActivationBlock       = uint256S("0x1");
        consensus.vUpgrades[Consensus::UPGRADE_BIP65].hashActivationBlock       = uint256S("0x");
        consensus.vUpgrades[Consensus::UPGRADE_ZC_PUBLIC].hashActivationBlock   = uint256S("0x1");
        consensus.vUpgrades[Consensus::UPGRADE_V3_4].hashActivationBlock        = uint256S("0x1");
        consensus.vUpgrades[Consensus::UPGRADE_V4_0].hashActivationBlock        = uint256S("0x1");

        /**
         * The message start string is designed to be unlikely to occur in normal data.
         * The characters are rarely used upper ASCII, not valid as UTF-8, and produce
         * a large 4-byte int at any alignment.
         */
        pchMessageStart[0] = 0x42;
        pchMessageStart[1] = 0xa3;
        pchMessageStart[2] = 0x72;
        pchMessageStart[3] = 0x34;
        nDefaultPort = 51472;

        // Note that of those with the service bits flag, most only support a subset of possible options
        vSeeds.push_back(CDNSSeedData("", "", true));

        base58Prefixes[PUBKEY_ADDRESS]  = std::vector<unsigned char>(1, 65);        // Start with 'T' from https://en.bitcoin.it/wiki/List_of_address_prefixes
        base58Prefixes[SCRIPT_ADDRESS]  = std::vector<unsigned char>(1, 18);        // Start with '8' from https://en.bitcoin.it/wiki/List_of_address_prefixes
        base58Prefixes[STAKING_ADDRESS] = std::vector<unsigned char>(1, 125);        // Start with 's' from https://en.bitcoin.it/wiki/List_of_address_prefixes
        base58Prefixes[SECRET_KEY]      = std::vector<unsigned char>(1, 127);        // Start with 't' from https://en.bitcoin.it/wiki/List_of_address_prefixes

        base58Prefixes[EXT_PUBLIC_KEY]  = boost::assign::list_of(0x06)(0x4F)(0x62)(0x66).convert_to_container<std::vector<unsigned char> >();
        base58Prefixes[EXT_SECRET_KEY]  = boost::assign::list_of(0x06)(0x2F)(0x47)(0x5E).convert_to_container<std::vector<unsigned char> >();

        // BIP44 coin type is from https://github.com/satoshilabs/slips/blob/master/slip-0044.md
        base58Prefixes[EXT_COIN_TYPE]   = boost::assign::list_of(0x40)(0x00)(0x00)(0x33).convert_to_container<std::vector<unsigned char> >(); // 0x40000033

        vFixedSeeds = std::vector<SeedSpec6>(pnSeed6_main, pnSeed6_main + ARRAYLEN(pnSeed6_main));
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return data;
    }

};
static CMainParams mainParams;

/**
 * Testnet (v3)
 */
class CTestNetParams : public CMainParams
{
public:
    CTestNetParams()
    {
        networkID = CBaseChainParams::TESTNET;
        strNetworkID = "test";

        genesis = CreateGenesisBlock(1600458983, 0, 0x1e0ffff0, 1, 250 * COIN);



        genesis = CreateGenesisBlock(1600458983, 1112032, 0x1e0ffff0, 1, 250 * COIN);
        consensus.hashGenesisBlock = genesis.GetHash();
        assert(consensus.hashGenesisBlock == uint256S("0x000002301ce038d4bcf0d6ef41844463b0be300888b85da7b936073d02944c99"));
        assert(genesis.hashMerkleRoot == uint256S("0x148723258586946f5463cf095941823596a831f897260dbcbb3670529b028c5f"));

        consensus.fPowAllowMinDifficultyBlocks           = false;
        consensus.powLimit                               = ~UINT256_ZERO >> 20;    // CARI starting difficulty is 1 / 2^12
        consensus.posLimitV1                             = ~UINT256_ZERO >> 24;
        consensus.posLimitV2                             = ~UINT256_ZERO >> 20;
        consensus.nBudgetCycleBlocks                     = 43200;                  // approx. 1 every 30 days
        consensus.nBudgetFeeConfirmations                = 6;                      // Number of confirmations for the finalization fee
        consensus.nCoinbaseMaturity                      = 100;
        consensus.nFutureTimeDriftPoW                    = 7200;
        consensus.nFutureTimeDriftPoS                    = 180;
        consensus.nMasternodeCountDrift                  = 20;                     // num of MN we allow the see-saw payments to be off by
        consensus.nMaxMoneyOut                           = 10191520 * COIN;
        consensus.nPoolMaxTransactions                   = 3;
        consensus.nProposalEstablishmentTime             = 60 * 60 * 24;           // must be at least a day old to make it into a budget
        consensus.nStakeMinAge                           = 60 * 60;
        consensus.nStakeMinDepth                         = 600;
        consensus.nTargetTimespan                        = 40 * 60;
        consensus.nTargetTimespanV2                      = 30 * 60;
        consensus.nTargetSpacing                         = 1 * 60;
        consensus.nTimeSlotLength                        = 15;

        // spork keys
        consensus.strSporkPubKey                         = "040F129DE6546FE405995329A887329BED4321325B1A73B0A257423C05C1FCFE9E40EF0678AEF59036A22C42E61DFD29DF7EFB09F56CC73CADF64E05741880E3E7";
        consensus.strSporkPubKeyOld                      = "";
        consensus.nTime_EnforceNewSporkKey               = 0;
        consensus.nTime_RejectOldSporkKey                = 0;

        // height-based activations
        consensus.height_last_ZC_AccumCheckpoint         = 0;
        consensus.height_last_ZC_WrappedSerials          = 0;
        consensus.height_start_InvalidUTXOsCheck         = 999999999;
        consensus.height_start_ZC_InvalidSerials         = 0;
        consensus.height_start_ZC_SerialRangeCheck       = 999999999;
        consensus.height_ZC_RecalcAccumulators           = 999999999;

        // validation by-pass
        consensus.nTarianBadBlockTime                    = 1471401614;    // Skip nBit validation of Block 259201 per PR #915
        consensus.nTarianBadBlockBits                    = 0x1c056dac;    // Skip nBit validation of Block 259201 per PR #915

        // Zerocoin-related params
        consensus.ZC_Modulus                             = "25195908475657893494027183240048398571429282126204032027777137836043662020707595556264018525880784"
                                                           "4069182906412495150821892985591491761845028084891200728449926873928072877767359714183472702618963750149718246911"
                                                           "6507761337985909570009733045974880842840179742910064245869181719511874612151517265463228221686998754918242243363"
                                                           "7259085141865462043576798423387184774447920739934236584823824281198163815010674810451660377306056201619676256133"
                                                           "8441436038339044149526344321901146575444541784240209246165157233507787077498171257724679629263863563732899121548"
                                                           "31438167899885040445364023527381951378636564391212010397122822120720357";

        consensus.ZC_MaxPublicSpendsPerTx                = 637;         // Assume about 220 bytes each input
        consensus.ZC_MaxSpendsPerTx                      = 7;           // Assume about 20kb each input
        consensus.ZC_MinMintConfirmations                = 20;
        consensus.ZC_MinMintFee                          = 1 * CENT;
        consensus.ZC_MinStakeDepth                       = 200;
        consensus.ZC_TimeStart                           = 1508214600;  // October 17, 2017 4:30:00 AM
        consensus.ZC_WrappedSerialsSupply                = 0 * COIN;    // zerocoin supply at height_last_ZC_WrappedSerials

        // Network upgrades
        consensus.vUpgrades[Consensus::BASE_NETWORK].nActivationHeight          = Consensus::NetworkUpgrade::ALWAYS_ACTIVE;
        consensus.vUpgrades[Consensus::UPGRADE_TESTDUMMY].nActivationHeight     = Consensus::NetworkUpgrade::NO_ACTIVATION_HEIGHT;
        consensus.vUpgrades[Consensus::UPGRADE_POS].nActivationHeight           = 5001;
        consensus.vUpgrades[Consensus::UPGRADE_POS_V2].nActivationHeight        = 5010;
        consensus.vUpgrades[Consensus::UPGRADE_ZC].nActivationHeight            = 5050;
        consensus.vUpgrades[Consensus::UPGRADE_ZC_V2].nActivationHeight         = 5100;
        consensus.vUpgrades[Consensus::UPGRADE_BIP65].nActivationHeight         = Consensus::NetworkUpgrade::ALWAYS_ACTIVE;
        consensus.vUpgrades[Consensus::UPGRADE_ZC_PUBLIC].nActivationHeight     = 6000;
        consensus.vUpgrades[Consensus::UPGRADE_V3_4].nActivationHeight          = 5300;
        consensus.vUpgrades[Consensus::UPGRADE_V4_0].nActivationHeight          = 5400;
        consensus.vUpgrades[Consensus::UPGRADE_V5_DUMMY].nActivationHeight      = Consensus::NetworkUpgrade::NO_ACTIVATION_HEIGHT;

        consensus.vUpgrades[Consensus::UPGRADE_ZC].hashActivationBlock          = uint256S("0x1");
        consensus.vUpgrades[Consensus::UPGRADE_ZC_V2].hashActivationBlock       = uint256S("0x1");
        consensus.vUpgrades[Consensus::UPGRADE_BIP65].hashActivationBlock       = uint256S("0x");
        consensus.vUpgrades[Consensus::UPGRADE_ZC_PUBLIC].hashActivationBlock   = uint256S("0x1");
        consensus.vUpgrades[Consensus::UPGRADE_V3_4].hashActivationBlock        = uint256S("0x1");
        consensus.vUpgrades[Consensus::UPGRADE_V4_0].hashActivationBlock        = uint256S("0x1");

        /**
         * The message start string is designed to be unlikely to occur in normal data.
         * The characters are rarely used upper ASCII, not valid as UTF-8, and produce
         * a large 4-byte int at any alignment.
         */
        pchMessageStart[0] = 0x42;
        pchMessageStart[1] = 0xa3;
        pchMessageStart[2] = 0x72;
        pchMessageStart[3] = 0x34;
        nDefaultPort = 51474;

        // Note that of those with the service bits flag, most only support a subset of possible options
        vSeeds.push_back(CDNSSeedData("", "", true));

        base58Prefixes[PUBKEY_ADDRESS]  = std::vector<unsigned char>(1, 65);        // Start with 'T' from https://en.bitcoin.it/wiki/List_of_address_prefixes
        base58Prefixes[SCRIPT_ADDRESS]  = std::vector<unsigned char>(1, 18);        // Start with '8' from https://en.bitcoin.it/wiki/List_of_address_prefixes
        base58Prefixes[STAKING_ADDRESS] = std::vector<unsigned char>(1, 125);        // Start with 's' from https://en.bitcoin.it/wiki/List_of_address_prefixes
        base58Prefixes[SECRET_KEY]      = std::vector<unsigned char>(1, 127);        // Start with 't' from https://en.bitcoin.it/wiki/List_of_address_prefixes

        base58Prefixes[EXT_PUBLIC_KEY]  = boost::assign::list_of(0x06)(0x4F)(0x62)(0x66).convert_to_container<std::vector<unsigned char> >();
        base58Prefixes[EXT_SECRET_KEY]  = boost::assign::list_of(0x06)(0x2F)(0x47)(0x5E).convert_to_container<std::vector<unsigned char> >();

        // BIP44 coin type is from https://github.com/satoshilabs/slips/blob/master/slip-0044.md
        base58Prefixes[EXT_COIN_TYPE]   = boost::assign::list_of(0x40)(0x00)(0x00)(0x33).convert_to_container<std::vector<unsigned char> >(); // 0x40000033

        vFixedSeeds = std::vector<SeedSpec6>(pnSeed6_test, pnSeed6_test + ARRAYLEN(pnSeed6_test));
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataTestnet;
    }
};
static CTestNetParams testNetParams;

/**
 * Regression test
 */
class CRegTestParams : public CTestNetParams
{
public:
    CRegTestParams()
    {
        networkID = CBaseChainParams::REGTEST;
        strNetworkID = "regtest";

        genesis = CreateGenesisBlock(1600458983, 1112032, 0x1e0ffff0, 1, 250 * COIN);
        consensus.hashGenesisBlock = genesis.GetHash();
        assert(consensus.hashGenesisBlock == uint256S("0x000002301ce038d4bcf0d6ef41844463b0be300888b85da7b936073d02944c99"));
        assert(genesis.hashMerkleRoot == uint256S("0x148723258586946f5463cf095941823596a831f897260dbcbb3670529b028c5f"));

        consensus.fPowAllowMinDifficultyBlocks           = false;
        consensus.powLimit                               = ~UINT256_ZERO >> 20;    // CARI starting difficulty is 1 / 2^12
        consensus.posLimitV1                             = ~UINT256_ZERO >> 24;
        consensus.posLimitV2                             = ~UINT256_ZERO >> 20;
        consensus.nBudgetCycleBlocks                     = 43200;                  // approx. 1 every 30 days
        consensus.nBudgetFeeConfirmations                = 6;                      // Number of confirmations for the finalization fee
        consensus.nCoinbaseMaturity                      = 100;
        consensus.nFutureTimeDriftPoW                    = 7200;
        consensus.nFutureTimeDriftPoS                    = 180;
        consensus.nMasternodeCountDrift                  = 20;                     // num of MN we allow the see-saw payments to be off by
        consensus.nMaxMoneyOut                           = 10191520 * COIN;
        consensus.nPoolMaxTransactions                   = 3;
        consensus.nProposalEstablishmentTime             = 60 * 60 * 24;           // must be at least a day old to make it into a budget
        consensus.nStakeMinAge                           = 60 * 60;
        consensus.nStakeMinDepth                         = 600;
        consensus.nTargetTimespan                        = 40 * 60;
        consensus.nTargetTimespanV2                      = 30 * 60;
        consensus.nTargetSpacing                         = 1 * 60;
        consensus.nTimeSlotLength                        = 15;

        // spork keys
        consensus.strSporkPubKey                         = "040F129DE6546FE405995329A887329BED4321325B1A73B0A257423C05C1FCFE9E40EF0678AEF59036A22C42E61DFD29DF7EFB09F56CC73CADF64E05741880E3E7";
        consensus.strSporkPubKeyOld                      = "";
        consensus.nTime_EnforceNewSporkKey               = 0;
        consensus.nTime_RejectOldSporkKey                = 0;

        // height-based activations
        consensus.height_last_ZC_AccumCheckpoint         = 0;
        consensus.height_last_ZC_WrappedSerials          = 0;
        consensus.height_start_InvalidUTXOsCheck         = 999999999;
        consensus.height_start_ZC_InvalidSerials         = 0;
        consensus.height_start_ZC_SerialRangeCheck       = 999999999;
        consensus.height_ZC_RecalcAccumulators           = 999999999;

        // validation by-pass
        consensus.nTarianBadBlockTime                    = 1471401614;    // Skip nBit validation of Block 259201 per PR #915
        consensus.nTarianBadBlockBits                    = 0x1c056dac;    // Skip nBit validation of Block 259201 per PR #915

        // Zerocoin-related params
        consensus.ZC_Modulus                             = "25195908475657893494027183240048398571429282126204032027777137836043662020707595556264018525880784"
                                                           "4069182906412495150821892985591491761845028084891200728449926873928072877767359714183472702618963750149718246911"
                                                           "6507761337985909570009733045974880842840179742910064245869181719511874612151517265463228221686998754918242243363"
                                                           "7259085141865462043576798423387184774447920739934236584823824281198163815010674810451660377306056201619676256133"
                                                           "8441436038339044149526344321901146575444541784240209246165157233507787077498171257724679629263863563732899121548"
                                                           "31438167899885040445364023527381951378636564391212010397122822120720357";

        consensus.ZC_MaxPublicSpendsPerTx                = 637;         // Assume about 220 bytes each input
        consensus.ZC_MaxSpendsPerTx                      = 7;           // Assume about 20kb each input
        consensus.ZC_MinMintConfirmations                = 20;
        consensus.ZC_MinMintFee                          = 1 * CENT;
        consensus.ZC_MinStakeDepth                       = 200;
        consensus.ZC_TimeStart                           = 1508214600;  // October 17, 2017 4:30:00 AM
        consensus.ZC_WrappedSerialsSupply                = 0 * COIN;    // zerocoin supply at height_last_ZC_WrappedSerials

        // Network upgrades
        consensus.vUpgrades[Consensus::BASE_NETWORK].nActivationHeight          = Consensus::NetworkUpgrade::ALWAYS_ACTIVE;
        consensus.vUpgrades[Consensus::UPGRADE_TESTDUMMY].nActivationHeight     = Consensus::NetworkUpgrade::NO_ACTIVATION_HEIGHT;
        consensus.vUpgrades[Consensus::UPGRADE_POS].nActivationHeight           = 5001;
        consensus.vUpgrades[Consensus::UPGRADE_POS_V2].nActivationHeight        = 5010;
        consensus.vUpgrades[Consensus::UPGRADE_ZC].nActivationHeight            = 5050;
        consensus.vUpgrades[Consensus::UPGRADE_ZC_V2].nActivationHeight         = 5100;
        consensus.vUpgrades[Consensus::UPGRADE_BIP65].nActivationHeight         = Consensus::NetworkUpgrade::ALWAYS_ACTIVE;
        consensus.vUpgrades[Consensus::UPGRADE_ZC_PUBLIC].nActivationHeight     = 6000;
        consensus.vUpgrades[Consensus::UPGRADE_V3_4].nActivationHeight          = 5300;
        consensus.vUpgrades[Consensus::UPGRADE_V4_0].nActivationHeight          = 5400;
        consensus.vUpgrades[Consensus::UPGRADE_V5_DUMMY].nActivationHeight      = Consensus::NetworkUpgrade::NO_ACTIVATION_HEIGHT;

        consensus.vUpgrades[Consensus::UPGRADE_ZC].hashActivationBlock          = uint256S("0x1");
        consensus.vUpgrades[Consensus::UPGRADE_ZC_V2].hashActivationBlock       = uint256S("0x1");
        consensus.vUpgrades[Consensus::UPGRADE_BIP65].hashActivationBlock       = uint256S("0x");
        consensus.vUpgrades[Consensus::UPGRADE_ZC_PUBLIC].hashActivationBlock   = uint256S("0x1");
        consensus.vUpgrades[Consensus::UPGRADE_V3_4].hashActivationBlock        = uint256S("0x1");
        consensus.vUpgrades[Consensus::UPGRADE_V4_0].hashActivationBlock        = uint256S("0x1");

        /**
         * The message start string is designed to be unlikely to occur in normal data.
         * The characters are rarely used upper ASCII, not valid as UTF-8, and produce
         * a large 4-byte int at any alignment.
         */
        pchMessageStart[0] = 0x42;
        pchMessageStart[1] = 0xa3;
        pchMessageStart[2] = 0x72;
        pchMessageStart[3] = 0x34;
        nDefaultPort = 51476;

        vFixedSeeds.clear(); //! Testnet mode doesn't have any fixed seeds.
        vSeeds.clear();      //! Testnet mode doesn't have any DNS seeds.
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataRegtest;
    }

    void UpdateNetworkUpgradeParameters(Consensus::UpgradeIndex idx, int nActivationHeight)
    {
        assert(idx > Consensus::BASE_NETWORK && idx < Consensus::MAX_NETWORK_UPGRADES);
        consensus.vUpgrades[idx].nActivationHeight = nActivationHeight;
    }
};
static CRegTestParams regTestParams;

static CChainParams* pCurrentParams = 0;

const CChainParams& Params()
{
    assert(pCurrentParams);
    return *pCurrentParams;
}

CChainParams& Params(CBaseChainParams::Network network)
{
    switch (network) {
    case CBaseChainParams::MAIN:
        return mainParams;
    case CBaseChainParams::TESTNET:
        return testNetParams;
    case CBaseChainParams::REGTEST:
        return regTestParams;
    default:
        assert(false && "Unimplemented network");
        return mainParams;
    }
}

void SelectParams(CBaseChainParams::Network network)
{
    SelectBaseParams(network);
    pCurrentParams = &Params(network);
}

bool SelectParamsFromCommandLine()
{
    CBaseChainParams::Network network = NetworkIdFromCommandLine();
    if (network == CBaseChainParams::MAX_NETWORK_TYPES)
        return false;

    SelectParams(network);
    return true;
}

void UpdateNetworkUpgradeParameters(Consensus::UpgradeIndex idx, int nActivationHeight)
{
    regTestParams.UpdateNetworkUpgradeParameters(idx, nActivationHeight);
}
