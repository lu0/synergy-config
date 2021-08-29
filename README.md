# Synergy config

This is my setup for the open source core component of [Synergy](https://github.com/symless/synergy-core), a keyboard and mouse sharing tool.

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

Run Synergy GUI on both laptops, so you can see **Client**'s and **Server**'s **name**.
```zsh
synergy
```
Modify `~/code/synergy-core/synergy.conf` to your needs. Then link it to your Home folder.
```zsh
ln -srf synergy.conf ~/.synergy.conf
```

Run synergy as **Server** on your primary PC (the one with the keyboard you're going to use).
```zsh
synergy-core --server -f -a <address> -c ~/.synergy.conf
```

Run synergy as a **Client** on the other PC.
```zsh
synergy-core --client -f <server-address>
```
### Autostart (SDDM display manager)
Run Synergy as client at startup (if using [SDDM](https://github.com/lu0/sddm-chili))
```zsh
sudo sh -c 'echo "" >> /usr/share/sddm/scripts/Xsetup' 
sudo sh -c 'echo "/usr/bin/synergy-core --client <serverIP>" >> /usr/share/sddm/scripts/Xsetup' 
```

### Disable internal monitor
Paste this in `/usr/share/sddm/scripts/Xsetup` of your **2nd computer**, this will force SDDM to be displayed on the external monitor. **Use this if you always keep the lid of your 2nd computer closed**, just like I do.
```zsh
xrandr --output eDP-1 --off
```
Or paste this if you want SDDM on both screens but the HDMI one has the wrong resolution (my 2nd computer is HD, but my monitor is FHD).
```zsh
xrandr --output HDMI-1 --mode 1920x1080
```

### Automatic Shutdown-WakeUp Schedule
Modify `schedule-on-off.sh` to your needs.
```zsh
sudo ln -srf schedule-on-off.sh /usr/bin/
```
Paste this in ```/usr/share/sddm/scripts/Xsetup```
```zsh
/usr/bin/schedule-on-off.sh
```
Prevent the computer from sleeping automatically when SDDM is active.
```zsh
sudo sh -c "echo 'HandleLidSwitch=ignore' >> /etc/systemd/logind.conf"
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
Rebuild Synergy if you need to or if the [Synergy](https://github.com/symless/synergy-core) submodule has new commits. The binaries are symlinked, you don't need to repeat the previous step.
```zsh
rm -rf build-previous/
mv build/ build-previous/
mkdir build && cd build/
cmake ../source-code-git/
make
```

If the build is unsuccessful, you may need the following libraries:
```zsh
sudo apt install -y \
  qtcreator \
  qtbase5-dev \
  qttools5-dev-tools \
  qttools5-dev \
  cmake \
  make \
  g++ \
  xorg-dev \
  libssl-dev \
  libx11-dev \
  libsodium-dev \
  libgl1-mesa-glx \
  libegl1-mesa \
  libcurl4-openssl-dev \
  libavahi-compat-libdnssd-dev \
  qtdeclarative5-dev \
  libqt5svg5-dev \
  libsystemd-dev \
  libnotify-dev \
  libgdk-pixbuf2.0-dev \
  libglib2.0-dev
```

<!-- If still unsuccessful, go to a working commit:
```zsh
cd source-code-git/
git checkout 0bd448d5 # v2.0.0 
``` -->

## Disclaimer
I'm not the maintainer of Synergy, nor am I affiliated with Symless in any way. Bugs or issues related to Synergy should be reported directly on the official [issues page](https://github.com/symless/synergy-core/issues).
