# CodeRed Universal v1.0.0

A bare-bones template to get your started in Unreal Engine 3 modding that can be used in any game. When you open this project you WILL have a bunch of errors, you must add your own SDK and configure it as such. The included "PlaceholderSDK" is just an example. Everything you need to know is described via comments throughout the projects source.

#### Requirements

- Moderate understanding of how Unreal Engine works (Globals, objects, actors, classes, etc).
- Moderate to advanced understanding of modern C++ (Memory and allocation specifically).
- Visual Studio or another Windows based compiler (For Windows header files, along with library linking).
- ISO C++17 Standard.

#### Libraries

The following third party libraries are used for compiling, they are included in this project but can be found below.

- Microsoft Detours https://github.com/microsoft/Detours/

## Features

Included are the following features, each have their own examples in their own files retrospectively; along with comments on how to use them and how they work.

- Multicolored debug console, along with writing to a text file for offline logging/analyzing.
- Automatic initialization of globals, along with detouring of the Process Event function.
- Pre and post function hooking, bind your own functions that fire when an Unreal Engine function fires.
- Instance storage, static and dynamically store needed classes that can be grabbed at any time.
- Command, setting, and mod manager. Bind strings to activate mods or change certain settings dynamically (For separate UI/Console interaction).
- GameState, track where the player is/what type of game they are in at all times.

## Issues & Feedback

If you notice something wrong or if anything can be improved please create a new issue [here](https://github.com/CodeRedRL/CodeRed-Universal/issues/), but do not submit a question to why something isn't working if you do not meet the requirements for this project listed in this README.

## License

This repository is licensed under the MIT License, feel free to do what you want but you are responsible for your own actions. Make sure the game you are using this project with allows third party modding.
