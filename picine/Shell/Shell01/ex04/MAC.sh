#!/bin/bash
ifconfig | grep -w 'ether' | tr -s "ether" | sed 's/[[:blank:]]//g' | sed 's/ether//g'