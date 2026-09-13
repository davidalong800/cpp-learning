# cpp-learning

My journey learning C++ from scratch. This repository holds the programs I write myself and my study notes for each day.

## Structure

```
cpp-learning/
├── README.md          ← this file
├── LICENSE            ← MIT license
├── .gitignore         ← what not to upload to GitHub
├── notes/             ← study notes by day
│   └── cpp_day01.md
└── 01_basics/         ← day 1: output, variables, input
    ├── hello.cpp
    ├── about_me.cpp
    ├── name_frame.cpp
    └── age_input.cpp
```

Naming rules I follow:

- `.cpp` extension, Latin letters only, lowercase, `_` or `-` as separators;
- the file name describes its content: `name_frame.cpp`, not `task3.cpp`;
- folders are numbered (`01_`, `02_`) so they sort in order.

## Build and run

```bash
clang++ -std=c++17 01_basics/hello.cpp -o hello   # compile
./hello                                           # run (macOS / Linux)
hello.exe                                         # run (Windows)
```

## Progress

| Day | Topic | Files | Notes |
|---|---|---|---|
| 1 | `cout`, variables, `cin`, compilation | `01_basics/` | [notes/cpp_day01.md](notes/cpp_day01.md) |
| 2 | `getline`, `if` / `else`, logical operators | — | — |

## Code style

- I write `std::` explicitly and never use `using namespace std;`;
- line breaks use `"\n"`, not `std::endl`;
- meaningful variable names: `age`, not `a`.

## Requirements

A compiler with C++17 support. On macOS, `clang++` comes with the Xcode Command Line Tools:

```bash
xcode-select --install   # install once, if you don't have it yet
```

## License

Released under the [MIT License](LICENSE).
