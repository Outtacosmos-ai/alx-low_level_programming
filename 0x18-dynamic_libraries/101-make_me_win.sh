#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/Outtacosmos-ai/alx-low_level_programming/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/tmp/libgiga.so
