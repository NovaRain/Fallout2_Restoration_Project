#!/bin/bash

set -xeu -o pipefail

sound_dir="$RELEASE_DIR/data/sound/music"

rm -rf "$sound_dir"
mkdir -p "$sound_dir"
git checkout -- data/sound/music
cp data/sound/music/*.acm "$sound_dir"
