#!/bin/bash
echo "BearShell - Starter"
read -n1 -p "Do you want to start BearShell, or edit the lyrica.txt file [s, e]?" userchoice
case $userchoice in
    s) /run/media/lynnf/InterneDaten/devzone/BearShellCPP/BearShellCPP ;;
    e) nano lyrica.txt ;;
esac
