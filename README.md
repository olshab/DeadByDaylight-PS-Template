# Template project for advanced modding

If you download this as Source Code, you'd need to compile it in Visual Studio. **INSTEAD** you can download already compiled project that doesn't need any requirements other than UE4 itself from *Releases* section.

**Fully compatible with DBD 6.5.2 (Private Server)**

![Preview](https://i.imgur.com/XVzkcaG.png)

## What is it for

This project contains all classes, structs and enums used in Dead By Daylight reflection system. This allows for creating technical blueprint mods that use or reference DBD related stuff.

## Requirements

If you want to modify source code and compile this project, you need Visual Studio 2019 or newer.

## How to compile

1. Right click on `DeadByDaylight.uproject` and choose `Generate Visual Studio project files`. ![Generate](https://i.imgur.com/ZL1FjPq.png)
2. Open `DeadByDaylight.sln`, in Solution Explorer right click on `DeadByDaylight` project and choose `Build`. ![Build](https://i.imgur.com/2OBtJcK.png)
3. Once it is compiled, you can double click on `DeadByDaylight.uproject` to open it in UE 4.27
