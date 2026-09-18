# Must be ran from project root
# Requires Porytiles 2.0

# Parameters
# $1: Name/Directory for the Primary tileset in the pokeemerald project

# Compile the tileset to the project tileset directory
porytiles compile-tileset -C ./ --metatile-attribute-size 2 "gTileset_$1"
