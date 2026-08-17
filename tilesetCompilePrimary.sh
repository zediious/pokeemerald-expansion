# Parameters
# $1: Name/Directory for the Primary tileset being compiled in the work directory (The .gal file and it's containing directory need same name)
# $2: Name/Directory for the Primary tileset in the pokeemerald project (~/data/tilesets/primary/$2)

TILESET_DIR=/home/jackd/Projects/ROM\ Hacking\ Work/_Assets/Custom/Art/Tilesets/

# Move to the tileset work dir
cd "$TILESET_DIR/$1/"

# Split image layers into new images
wine gale-splitter.exe --noclip "$1.gal"

# Remove the frame prefix
cd "$1"
mv f0_top.png top.png
mv f0_middle.png middle.png
mv f0_bottom.png bottom.png

# Move to project tileset directory
cd /home/jackd/Repositories/pokeemerald-expansion/data/tilesets/

# Compile the tileset to the protect tileset directory
porytiles compile-primary -Wall -o "primary/$2" "$TILESET_DIR/$1/$1" ../../include/constants/metatile_behaviors.h
