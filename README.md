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

## How to compile and run

Go into the folder with the program, compile it, then run it.

```bash
cd 01_basics              # go into the folder
clang++ hello.cpp -o hello   # compile: hello.cpp becomes the program "hello"
./hello                   # run it
```

What the commands mean:

- `cd 01_basics` — go into the folder `01_basics`, where the `.cpp` file is;
- `clang++ hello.cpp -o hello` — compile. `-o hello` sets the name of the finished program;
- `./hello` — run the program. The `./` means "look for the program in the current folder";
- without `-o`, the program would be called `a.out`.

To compile another file, replace the name:

```bash
clang++ age_input.cpp -o age_input
./age_input
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

You only need a compiler. On macOS, `clang++` is already there — check it with:

```bash
clang++ --version
```

If the command is not found, install the Xcode Command Line Tools:

```bash
xcode-select --install
```

## License

Released under the [MIT License](LICENSE).
