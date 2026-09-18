# Must be ran from project root
# Requires Porytiles 2.0

# Parameters
# $1: Name/Directory for the Secondary tileset in the pokeemerald project (~/data/tilesets/secondary/$1)
# $2: Name/Directory of the parent primary tileset being compiled against

# Compile the tileset to the project tileset directory
porytiles compile-tileset --metatile-attribute-size 2 "gTileset_$1" --primary-pairing-mode manual --primary-pairing-partners "gTileset_$2"
