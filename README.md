# Synergy Core

This is my clone of the open source core component of Synergy, a keyboard and mouse sharing tool.

Clone the repo and submodules into ~/code/
```zsh
cd ~/code/
git clone --recursive https://github.com/lu0/synergy-core
```

## Usage

Add synergy to path
```zsh
cd ~/code/synergy-core
sudo ln -srf build/bin/synergy* /usr/bin/
```

Run Synergy GUI in both laptops, so you can see Client's and Server's name/IP.
```zsh
synergy
```
*It make take a while to open as on some Destop Environments the System Tray for Synergy is not available*
<br />
<br />
Modify ```~/code/synergy-core/synergy.conf``` for your needs. Then link it to your Home folder
```zsh
ln -srf synergy.conf ~/.synergy.conf
```

Run synergy as **Server**
```zsh
synergys                # add -f option for verbose
```

Run synergy as **Client**
```zsh
synergyc <serverIP>     # add -f option for verbose
```

Make Synergy start before login (if using [SDDM](https://github.com/lu0/sddm-chili))
```zsh
sudo sh -c 'echo "" >> /usr/share/sddm/scripts/Xsetup' 
sudo sh -c 'echo "/usr/bin/synergyc <serverIP>" >> /usr/share/sddm/scripts/Xsetup' 
```
Paste this in ```/usr/share/sddm/scripts/Xsetup``` to display SDDM in external monitor by default
```zsh
xrandr --output eDP-1 --off
```
Or paste this if you want SDDM on both screens but the HDMI one has the wrong resolution
```zsh
xrandr --output HDMI-1 --mode 1920x1080
```

<!-- ```zsh
HDMIPORT=$(xrandr | grep " connected " | grep "HDMI" | awk '{print $1}')
[[ ! -z "$HDMIPORT" ]] && xrandr --output eDP-1 --off && xrandr --output HDMI-1 --mode 1920x1080 -->
<!-- ``` -->

<!-- Run ```sudo visudo``` and paste the following at the end of the file:
```zsh
user_name ALL=(ALL) NOPSSWD:/usr/bin/killall -9 synergyc
``` -->

## Building
Rebuild Synergy if you need to or if the submodule has new commits
```zsh
mv build/ build-previous/
mkdir build && cd build/
cmake ../source-code-git/
make
```

