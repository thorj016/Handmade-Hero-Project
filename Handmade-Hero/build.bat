@echo off

mkdir clBuild
pushd clBuild
cl -Zi ..\Main.cpp user32.lib
popd