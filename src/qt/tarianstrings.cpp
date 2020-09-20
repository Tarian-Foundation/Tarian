

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *tarian_strings[] = {
QT_TRANSLATE_NOOP("tarian-core", " mints deleted\n"),
QT_TRANSLATE_NOOP("tarian-core", " mints updated, "),
QT_TRANSLATE_NOOP("tarian-core", " unconfirmed transactions removed\n"),
QT_TRANSLATE_NOOP("tarian-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Cannot obtain a lock on data directory %s. TARIAN Core is probably already "
"running."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Change automatic finalized budget voting behavior. mode=auto: Vote for only "
"exact finalized budget match to my generated budget. (string, default: auto)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:%u)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Delete all zerocoin spends and mints that have been recorded to the "
"blockchain database and reindex them (0-1, default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Disable all TARIAN specific functionality (Masternodes, Zerocoin, SwiftX, "
"Budgeting) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Enable SwiftX, show confirmations for locked transactions (bool, default: %s)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Enable cold staking functionality (0-1, default: %u). Disabled if staking=0"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Enable or disable staking functionality for TARN inputs (0-1, default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Enable or disable staking functionality for zTARN inputs (0-1, default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Enable spork administration functionality with the appropriate private key."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Error: The transaction is larger than the maximum allowed transaction size!"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Error: Unsupported argument -checklevel found. Checklevel must be level 4."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Exclude debugging information for a category. Can be used in conjunction "
"with -debug=1 to output debug logs for all categories except one or more "
"specified categories."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Execute command when the best block changes and its size is over (%s in cmd "
"is replaced by block hash, %d with the block size)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Failed to find coin set amongst held coins with less than maxNumber of Spends"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Fees (in TARN/Kb) smaller than this are considered zero fee for relaying "
"(default: %s)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Fees (in TARN/Kb) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"In rare cases, a spend with 7 coins exceeds our maximum allowable "
"transaction size, please retry spend using 6 or less coins"),
QT_TRANSLATE_NOOP("tarian-core", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Insufficient or insufficient confirmed funds, you might need to wait a few "
"minutes and try again."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Keep the specified amount available for spending at all times (default: 0)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Log transaction priority and fee per kB when mining blocks (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Maximum average size of an index occurrence in the block spam filter "
"(default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Maximum size of the list of indexes in the block spam filter (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Maximum total fees to use in a single wallet transaction, setting too low "
"may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong TARIAN Core will not work properly."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Require high priority for relaying free or low-fee transactions (default:%u)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Send trace/debug info to console instead of debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Specify custom backup path to add a copy of any wallet backup. If set as "
"dir, every backup generates a timestamped file. If set as file, will rewrite "
"to that file every backup."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Specify location of debug log file: this can be an absolute path or a path "
"relative to the data directory (default: %s)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"SwiftX requires inputs with at least 6 confirmations, you might need to wait "
"a few minutes and try again."),
QT_TRANSLATE_NOOP("tarian-core", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("tarian-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"staking or merchant applications!"),
QT_TRANSLATE_NOOP("tarian-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of uacomments."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Unable to bind to %s on this computer. TARIAN Core is probably already running."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("tarian-core", ""
"Warning: -maxtxfee is set very high! Fees this large could be paid on a "
"single transaction."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong TARIAN Core will not work properly."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("tarian-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("tarian-core", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("tarian-core", "(54444 could be used only on mainnet)"),
QT_TRANSLATE_NOOP("tarian-core", "(default: %s)"),
QT_TRANSLATE_NOOP("tarian-core", "(default: 1)"),
QT_TRANSLATE_NOOP("tarian-core", "(must be 54444 for mainnet)"),
QT_TRANSLATE_NOOP("tarian-core", "<category> can be:"),
QT_TRANSLATE_NOOP("tarian-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("tarian-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("tarian-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("tarian-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("tarian-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Append comment to the user agent string"),
QT_TRANSLATE_NOOP("tarian-core", "Attempt to force blockchain corruption recovery"),
QT_TRANSLATE_NOOP("tarian-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("tarian-core", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("tarian-core", "Block creation options:"),
QT_TRANSLATE_NOOP("tarian-core", "Cannot create public spend input"),
QT_TRANSLATE_NOOP("tarian-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("tarian-core", "Cannot resolve -%s address: '%s'"),
QT_TRANSLATE_NOOP("tarian-core", "Cannot upgrade to HD wallet (already running HD support). Version: %d"),
QT_TRANSLATE_NOOP("tarian-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("tarian-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("tarian-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("tarian-core", "Connection options:"),
QT_TRANSLATE_NOOP("tarian-core", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("tarian-core", "Copyright (C) 2014-%i The Dash Core Developers"),
QT_TRANSLATE_NOOP("tarian-core", "Copyright (C) 2015-%i The TARIAN Core Developers"),
QT_TRANSLATE_NOOP("tarian-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("tarian-core", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("tarian-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("tarian-core", "Delete blockchain folders and resync from scratch"),
QT_TRANSLATE_NOOP("tarian-core", "Disable OS notifications for incoming transactions (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Disable safemode, override a real safe mode event (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("tarian-core", "Display the stake modifier calculations in the debug.log file."),
QT_TRANSLATE_NOOP("tarian-core", "Display verbose coin stake messages in the debug.log file."),
QT_TRANSLATE_NOOP("tarian-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("tarian-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("tarian-core", "Done loading"),
QT_TRANSLATE_NOOP("tarian-core", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("tarian-core", "Enable publish hash transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("tarian-core", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("tarian-core", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("tarian-core", "Enable publish raw transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("tarian-core", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("tarian-core", "Enable staking functionality (0-1, default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Enable the client to act as a masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("tarian-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("tarian-core", "Error loading block database"),
QT_TRANSLATE_NOOP("tarian-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("tarian-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("tarian-core", "Error loading wallet.dat: Wallet requires newer version of TARIAN Core"),
QT_TRANSLATE_NOOP("tarian-core", "Error opening block database"),
QT_TRANSLATE_NOOP("tarian-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("tarian-core", "Error writing zerocoinDB to disk"),
QT_TRANSLATE_NOOP("tarian-core", "Error"),
QT_TRANSLATE_NOOP("tarian-core", "Error: "),
QT_TRANSLATE_NOOP("tarian-core", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("tarian-core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("tarian-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("tarian-core", "Error: No valid utxo!"),
QT_TRANSLATE_NOOP("tarian-core", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("tarian-core", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("tarian-core", "Failed to find Zerocoins in wallet.dat"),
QT_TRANSLATE_NOOP("tarian-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("tarian-core", "Failed to parse host:port string"),
QT_TRANSLATE_NOOP("tarian-core", "Failed to parse public spend"),
QT_TRANSLATE_NOOP("tarian-core", "Failed to read block"),
QT_TRANSLATE_NOOP("tarian-core", "Failed to select a zerocoin"),
QT_TRANSLATE_NOOP("tarian-core", "Failed to wipe zerocoinDB"),
QT_TRANSLATE_NOOP("tarian-core", "Failed to write coin serial number into wallet"),
QT_TRANSLATE_NOOP("tarian-core", "Fee (in TARN/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("tarian-core", "Force safe mode (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("tarian-core", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("tarian-core", "Importing..."),
QT_TRANSLATE_NOOP("tarian-core", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("tarian-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("tarian-core", "Information"),
QT_TRANSLATE_NOOP("tarian-core", "Initialization sanity check failed. TARIAN Core is shutting down."),
QT_TRANSLATE_NOOP("tarian-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("tarian-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("tarian-core", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("tarian-core", "Invalid amount for -%s=<amount>: '%s'"),
QT_TRANSLATE_NOOP("tarian-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("tarian-core", "Invalid amount"),
QT_TRANSLATE_NOOP("tarian-core", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("tarian-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("tarian-core", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("tarian-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Limit size of signature cache to <n> entries (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Line: %d"),
QT_TRANSLATE_NOOP("tarian-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("tarian-core", "Loading banlist..."),
QT_TRANSLATE_NOOP("tarian-core", "Loading block index..."),
QT_TRANSLATE_NOOP("tarian-core", "Loading budget cache..."),
QT_TRANSLATE_NOOP("tarian-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("tarian-core", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("tarian-core", "Loading sporks..."),
QT_TRANSLATE_NOOP("tarian-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("tarian-core", "Location of the auth cookie (default: data dir)"),
QT_TRANSLATE_NOOP("tarian-core", "Lock masternodes from masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Lookup(): Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("tarian-core", "MNs synchronization pending..."),
QT_TRANSLATE_NOOP("tarian-core", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Masternode options:"),
QT_TRANSLATE_NOOP("tarian-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Mint did not make it into blockchain"),
QT_TRANSLATE_NOOP("tarian-core", "Need destination or change address because change is not exact"),
QT_TRANSLATE_NOOP("tarian-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("tarian-core", "Node relay options:"),
QT_TRANSLATE_NOOP("tarian-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("tarian-core", "Number of automatic wallet backups (default: 10)"),
QT_TRANSLATE_NOOP("tarian-core", "Number of custom location backups to retain (default: %d)"),
QT_TRANSLATE_NOOP("tarian-core", "On first run, create a legacy wallet instead of a HD wallet"),
QT_TRANSLATE_NOOP("tarian-core", "Only accept block chain matching built-in checkpoints (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("tarian-core", "Options:"),
QT_TRANSLATE_NOOP("tarian-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("tarian-core", "Peers are being disconnected due time differences."),
QT_TRANSLATE_NOOP("tarian-core", "Preparing for resync..."),
QT_TRANSLATE_NOOP("tarian-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Print version and exit"),
QT_TRANSLATE_NOOP("tarian-core", "Pubcoin not found in mint tx"),
QT_TRANSLATE_NOOP("tarian-core", "RPC server options:"),
QT_TRANSLATE_NOOP("tarian-core", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("tarian-core", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("tarian-core", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("tarian-core", "Recalculating TARN supply..."),
QT_TRANSLATE_NOOP("tarian-core", "Reindex the TARN and zTARN money supply statistics"),
QT_TRANSLATE_NOOP("tarian-core", "Reindexing zerocoin database..."),
QT_TRANSLATE_NOOP("tarian-core", "Reindexing zerocoin failed"),
QT_TRANSLATE_NOOP("tarian-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("tarian-core", "Rescanning..."),
QT_TRANSLATE_NOOP("tarian-core", "ResetMintZerocoin finished: "),
QT_TRANSLATE_NOOP("tarian-core", "ResetSpentZerocoin finished: "),
QT_TRANSLATE_NOOP("tarian-core", "Run a thread to flush wallet periodically (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("tarian-core", "Selected coins value is less than payment target"),
QT_TRANSLATE_NOOP("tarian-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("tarian-core", "Set external address:port to get to this masternode (example: %s)"),
QT_TRANSLATE_NOOP("tarian-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("tarian-core", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Set the Maximum reorg depth (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Set the masternode private key"),
QT_TRANSLATE_NOOP("tarian-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("tarian-core", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("tarian-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("tarian-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("tarian-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("tarian-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("tarian-core", "Specify data directory"),
QT_TRANSLATE_NOOP("tarian-core", "Specify masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("tarian-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("tarian-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("tarian-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("tarian-core", "Spend Valid"),
QT_TRANSLATE_NOOP("tarian-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Staking options:"),
QT_TRANSLATE_NOOP("tarian-core", "Stop running after importing blocks from disk (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "SwiftX options:"),
QT_TRANSLATE_NOOP("tarian-core", "Synchronization failed"),
QT_TRANSLATE_NOOP("tarian-core", "Synchronization finished"),
QT_TRANSLATE_NOOP("tarian-core", "Synchronizing budgets..."),
QT_TRANSLATE_NOOP("tarian-core", "Synchronizing masternode winners..."),
QT_TRANSLATE_NOOP("tarian-core", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("tarian-core", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("tarian-core", "Syncing zTARN wallet..."),
QT_TRANSLATE_NOOP("tarian-core", "This help message"),
QT_TRANSLATE_NOOP("tarian-core", "This is experimental software."),
QT_TRANSLATE_NOOP("tarian-core", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("tarian-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Too many spends needed"),
QT_TRANSLATE_NOOP("tarian-core", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("tarian-core", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("tarian-core", "Transaction Created"),
QT_TRANSLATE_NOOP("tarian-core", "Transaction Mint Started"),
QT_TRANSLATE_NOOP("tarian-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("tarian-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("tarian-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("tarian-core", "Transaction too large"),
QT_TRANSLATE_NOOP("tarian-core", "Trying to spend an already spent serial #, try again."),
QT_TRANSLATE_NOOP("tarian-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("tarian-core", "Unable to find transaction containing mint %s"),
QT_TRANSLATE_NOOP("tarian-core", "Unable to find transaction containing mint, txHash: %s"),
QT_TRANSLATE_NOOP("tarian-core", "Unable to generate initial key"),
QT_TRANSLATE_NOOP("tarian-core", "Unable to generate keys"),
QT_TRANSLATE_NOOP("tarian-core", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("tarian-core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("tarian-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("tarian-core", "Unsupported logging category %s=%s."),
QT_TRANSLATE_NOOP("tarian-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("tarian-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("tarian-core", "Use a custom max chain reorganization depth (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Use block spam filter (default: %u)"),
QT_TRANSLATE_NOOP("tarian-core", "Use the test network"),
QT_TRANSLATE_NOOP("tarian-core", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("tarian-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("tarian-core", "Value is below the smallest available denomination (= 1) of zTARN"),
QT_TRANSLATE_NOOP("tarian-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("tarian-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("tarian-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("tarian-core", "Wallet needed to be rewritten: restart TARIAN Core to complete"),
QT_TRANSLATE_NOOP("tarian-core", "Wallet options:"),
QT_TRANSLATE_NOOP("tarian-core", "Wallet window title"),
QT_TRANSLATE_NOOP("tarian-core", "Warning"),
QT_TRANSLATE_NOOP("tarian-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("tarian-core", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("tarian-core", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("tarian-core", "You don't have enough Zerocoins in your wallet"),
QT_TRANSLATE_NOOP("tarian-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("tarian-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("tarian-core", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("tarian-core", "Zerocoin minting available only on regtest"),
QT_TRANSLATE_NOOP("tarian-core", "Zerocoin options:"),
QT_TRANSLATE_NOOP("tarian-core", "isValid(): Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("tarian-core", "on startup"),
QT_TRANSLATE_NOOP("tarian-core", "wallet.dat corrupt, salvage failed"),
};
