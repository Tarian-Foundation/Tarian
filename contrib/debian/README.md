
Debian
====================
This directory contains files used to package tariand/tarian-qt
for Debian-based Linux systems. If you compile tariand/tarian-qt yourself, there are some useful files here.

## tarian: URI support ##


tarian-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install tarian-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your tarian-qt binary to `/usr/bin`
and the `../../share/pixmaps/tarian128.png` to `/usr/share/pixmaps`

tarian-qt.protocol (KDE)

