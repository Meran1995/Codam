#!/bin/bash
find . \( -type f -o -type d \) | wc -l | tr -d ' ' | sed 's/[[:blank:]]//g'
