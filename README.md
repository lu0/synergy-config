# Synergy Core

This is my clone of the open source core component of Synergy, a keyboard and mouse sharing tool.

## Usage

Clone the repo into ~/code/

```zsh
cd ~/code/
git clone https://github.com/lu0/synergy-core
```

Run synergy GUI in both laptops, so you can see client's and server's name/ip.
```zsh
~/code/synergy-core/build/bin/synergy
```

Modify ```~/code/synergy-core/synergy.conf``` for your needs. Then link it to your Home folder
```zsh
ln -srf ~/code/synergy-core/synergy.conf ~/.synergy.conf
```

Run synergy as server
```zsh
~/code/synergy-core/build/bin/synergys
```

Run synergy as client
```zsh
~/code/synergy-core/build/bin/synergyc <serverIP>
```

Remake if you need
```zsh
cd synergy-core && mv build/ build-previous/
mkdir build && cd build/
cmake ..
make
```

