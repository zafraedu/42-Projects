#!/bin/sh
find . \( -type f -or -type d \) | wc -l | awk '{print $1}'
