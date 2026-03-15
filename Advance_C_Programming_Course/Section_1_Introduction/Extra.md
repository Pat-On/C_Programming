## Here are all the major C standards:

**C89/C90** — the first official standard (ANSI C89, then ISO C90 — same standard, two names)

**C99** — released in 1999, added many modern features

**C11** — released in 2011, added:
- threading support (`threads.h`)
- atomic operations
- improved Unicode support
- anonymous structs and unions
- bounds-checking functions

**C17/C18** — released in 2017/2018:
- no new features added
- mostly bug fixes and clarifications to C11
- considered the current stable standard

**C23** — released in 2023, added:
- `bool`, `true`, `false` as keywords (no longer need `stdbool.h`)
- `nullptr` keyword
- binary literals (e.g. `0b1010`)
- improved `#embed` for embedding binary data
- constexpr for constants
- better Unicode support

So the full timeline is:
- 1989 → C89
- 1990 → C90
- 1999 → C99
- 2011 → C11
- 2017 → C17
- 2023 → C23

**C17 is currently the most widely adopted "stable" standard**, while C23 is the newest but still gaining compiler support.