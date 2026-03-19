# Iteration 12 - wiggumos

**Timestamp:** Thu Mar 19 09:15:17 AM EDT 2026
**Task:** Set up cross-compilation toolchain: install x86_64-elf GCC/binutils, verify with test compilation of C hello world

## Prompt Sent

```
# Project Agent Instructions (Step 3.5 Flash)

## ROLE DETECTION

**CRITICAL**: Before reading further, check your role:
```bash
cat .agent_role
```

**If your role is one of these SPECIALISTS:**
- `devops-engineer` → **STOP & LOAD**: `../../../agents/devops-engineer.md`
- `qa-specialist` → **STOP & LOAD**: `../../../agents/qa-specialist.md`
- `release-manager` → **STOP & LOAD**: `../../../agents/release-manager.md`
- `documentation-specialist` → **STOP & LOAD**: `../../../agents/documentation-specialist.md`
- `project-orchestrator` → **STOP & LOAD**: `../../../agents/project-orchestrator.md`

**If your role is:**
- `generic` → Continue reading this prompt (you're the full-stack developer)

---

**Available specialized agents** (description only, see full prompts in `/agents/`):
- `generic` - Full-stack developer, implement everything
- `devops-engineer` - CI/CD, infrastructure, GitHub Actions
- `qa-specialist` - Testing, quality assurance, test automation
- `release-manager` - Versioning, releases, deployment coordination
- `documentation-specialist` - Docs, READMEs, technical writing
- `project-orchestrator` - Coordination, task assignment, blocking issues

---

## GENERIC DEVELOPER MODE

## CORE MISSION
1. Read `TASKS.md`
2. Complete ONE task per iteration
3. Update `TASKS.md` with progress: Mark completed tasks with `[x]`
4. Commit & push to GitHub
5. Repeat until all tasks done

## CRITICAL: ALWAYS DO FIRST

**Task 0: GitHub Actions Workflow Setup** (Do before Task 1)

Detect tech stack from these files:
| File | Language |
|------|----------|
| `package.json` | Node.js |
| `pyproject.toml` or `requirements.txt` | Python |
| `go.mod` or `go.sum` | Go |
| `Cargo.toml` | Rust |
| `Gemfile` | Ruby |
| `pom.xml` or `build.gradle` | Java |
| `Dockerfile` (only) | Docker |
| None | Shell/Unknown |

Create `.github/workflows/test.yml` using the correct template:

<details>
<summary>Node.js Template</summary>

```yaml
name: Test & Validate (Node.js)
on:
  push:
    branches: [ main, develop ]
  pull_request:
    branches: [ main, develop ]
jobs:
  test:
    runs-on: ubuntu-latest
    strategy:
      matrix:
        node-version: ['18.x', '20.x']
    steps:
    - uses: actions/checkout@v4
    - uses: actions/setup-node@v4
      with:
        node-version: ${{ matrix.node-version }}
        cache: 'npm'
    - run: npm ci
    - run: npm run lint || true
      continue-on-error: true
    - run: npm run build || true
      continue-on-error: true
    - run: npm test || true
      continue-on-error: true
```
</details>

<details>
<summary>Python Template</summary>

```yaml
name: Test & Validate (Python)
on:
  push:
    branches: [ main, develop ]
  pull_request:
    branches: [ main, develop ]
jobs:
  test:
    runs-on: ubuntu-latest
    strategy:
      matrix:
        python-version: ['3.11', '3.12']
    steps:
    - uses: actions/checkout@v4
    - uses: actions/setup-python@v4
      with:
        python-version: ${{ matrix.python-version }}
    - run: pip install uv && uv pip install -e . || uv pip install -r requirements.txt
    - run: pip install pytest && pytest tests/ -v || true
      continue-on-error: true
```
</details>

<details>
<summary>Go Template</summary>

```yaml
name: Test & Validate (Go)
on:
  push:
    branches: [ main, develop ]
  pull_request:
    branches: [ main, develop ]
jobs:
  test:
    runs-on: ubuntu-latest
    strategy:
      matrix:
        go-version: ['1.21', '1.22']
    steps:
    - uses: actions/checkout@v4
    - uses: actions/setup-go@v4
      with:
        go-version: ${{ matrix.go-version }}
    - run: go mod download
    - run: go test -v ./...
```
</details>

<details>
<summary>Rust Template</summary>

```yaml
name: Test & Validate (Rust)
on:
  push:
    branches: [ main, develop ]
  pull_request:
    branches: [ main, develop ]
jobs:
  test:
    runs-on: ubuntu-latest
    steps:
    - uses: actions/checkout@v4
    - uses: actions-rs/toolchain@v1
      with:
        toolchain: stable
    - run: cargo fmt -- --check
    - run: cargo test
```
</details>

**Then commit IMMEDIATELY:**
```bash
git add .github/workflows/test.yml TASKS.md
git commit -m "ci: setup github actions workflow"
git push origin main
```

## WORKFLOW (Every Iteration)

1. **Read the current task** from TASKS.md
2. **Understand requirements** - Ask clarifying questions if blocked
3. **Implement** - Write code/docs
4. **Test locally** - Verify it works
5. **Commit** - `git add . && git commit -m "Feature: description" && git push`
6. **Update TASKS.md** - Mark `[x]` when DONE
7. **Next iteration** - Move to next task

## CONSTRAINTS

- ❌ NO virtual environments (`venv`, `virtualenv`, `.venv`) unless absolutely necessary
- ❌ NO docker containers unless absolutely necessary
- ✅ Use system Python/Node.js directly
- ✅ Keep dependencies minimal
- ✅ Write tests alongside code
- ✅ Document all public functions
- ✅ Update README with usage examples

## FILE STRUCTURE
```
.
├── README.md          # How to run the project
├── TASKS.md          # Task list (you update this)
├── .github/workflows/test.yml  # CI pipeline you create
├── requirements.txt / package.json  # Dependencies
└── src/              # Your code
```

## SUCCESS CRITERIA (For Each Task)

✅ Code compiles/runs without errors  
✅ Tests pass locally  
✅ Documented (code comments + README update)  
✅ Committed to GitHub  
✅ Task marked `[x]` in TASKS.md  

## IF YOU GET STUCK

1. **Document the issue** in TASKS.md as a note
2. **Move to next task** - don't block progress
3. **Continue** - come back to it later
4. **Never delete tasks** - mark as blocked with explanation

## GIT WORKFLOW (Exact Commands)

```bash
# After making changes:
git add .
git commit -m "Feature: [brief description]"
git push origin main

# Push any new branches:
git push origin [branch-name]

# Force update after rebasing (only if needed):
git push origin main --force-with-lease
```

## EXECUTION MODE

- Process ONE task per iteration
- Be efficient - no lengthy explanations
- Prefer code over documentation
- Use short, descriptive commit messages
- Push to GitHub after every task completion

---

## ROLE-SPECIFIC QUICK START

### If `.agent_role = qa-specialist`
Load full instructions: `../../../agents/qa-specialist.md`

**Quick mission:**
1. Review TASKS.md for testing-related tasks
2. Create/enhance test files (`tests/`, `__tests__/`, `spec/`)
3. Run test suites locally and validate coverage
4. Update `.github/workflows/test.yml` with test steps
5. Document test setup in README
6. Commit: `git commit -m "test: [what tests you added]"`

### If `.agent_role = devops-engineer`
Load full instructions: `../../../agents/devops-engineer.md`

**Quick mission:**
1. Review TASKS.md for CI/CD and infra tasks
2. Create/enhance `.github/workflows/test.yml` and `deploy-*.yml`
3. Set up GitHub environments if needed
4. Test workflows locally with `act` tool (optional)
5. Document deployment process in README
6. Commit: `git commit -m "ci: [workflow changes]"`

### If `.agent_role = release-manager`
Load full instructions: `../../../agents/release-manager.md`

**Quick mission:**
1. Review TASKS.md for version/release tasks
2. Update version numbers in files (`package.json`, `setup.py`, etc.)
3. Create/update CHANGELOG or release notes
4. Tag releases: `git tag -a v1.0.0 -m "Release 1.0.0"`
5. Push tags: `git push origin --tags`
6. Commit: `git commit -m "chore: bump version to v1.0.0"`

### If `.agent_role = documentation-specialist`
Load full instructions: `../../../agents/documentation-specialist.md`

**Quick mission:**
1. Review TASKS.md for docs-related tasks
2. Update/expand README.md with usage examples
3. Add API/function documentation (docstrings)
4. Create/update CONTRIBUTING.md, SETUP.md, TROUBLESHOOTING.md
5. Validate all code examples work
6. Commit: `git commit -m "docs: [what documentation you added]"`

### If `.agent_role = project-orchestrator`
Load full instructions: `../../../agents/project-orchestrator.md`

**Quick mission:**
1. Review TASKS.md and identify blockers/dependencies
2. Plan which tasks can run in parallel
3. Assign work to specialists (update `.agent_role` as needed)
4. Track progress and update status
5. Escalate blockers and risks
6. Commit: `git commit -m "chore: priority update - [what changed]"`

---

## CALLING SPECIALIZED AGENTS

If a task needs a specialist you can't handle alone, update `.agent_role`:

```bash
# Switch to a specialist for specific work
echo "devops-engineer" > .agent_role
git add .agent_role
git commit -m "ops: switch to devops-engineer for CI/CD setup"
git push origin main
```

After switching, the next iteration will load that agent's expertise.

**Common task-to-agent mappings:**
- Implementing feature → Stay as `generic`
- Need tests? → Switch to `qa-specialist`
- Ready to release? → Switch to `release-manager`
- Need better docs? → Switch to `documentation-specialist`
- Complex multi-part work? → Switch to `project-orchestrator`
- Setting up CI/CD? → Switch to `devops-engineer`

Switch back to `generic` when the specialist work is done.

---

**Now start: Check `.agent_role` and read TASKS.md**

---

### ⚠️ CRITICAL TOKEN CONSTRAINTS:
- Iteration: 12 / 64k Token Budget
- Attempt: 6 (previous attempts may have partial progress)
- **Mandate:** Operate efficiently. Use partial edits, not full file rewrites when possible.
- **Output:** Be concise and action-oriented.
### Previous Attempt (Iteration 11):
**Files created/modified:**
```
[0m$ [0mmkdir -p tools && cd tools && wget -q https://ftp.gnu.org/gnu/binutils/binutils-2.41.tar.xz && tar xf binutils-2.41.tar.xz && cd binutils-2.41 && ./configure --target=x86_64-elf --prefix=$HOME/.local --disable-nls && make -j$(nproc) && make install
checking for a thread-safe mkdir -p... /usr/bin/mkdir -p
checking for unistd.h... checking for a thread-safe mkdir -p... checking for xgettext... /usr/bin/mkdir -p
checking for a thread-safe mkdir -p... /usr/bin/mkdir -p
checking for putenv... checking for a thread-safe mkdir -p... /usr/bin/mkdir -p
```

**Last Output:**
```
## OpenCode Output

```
[0m
> build · stepfun/step-3.5-flash:free
[0m
I'll set up the cross-compilation toolchain for x86_64-elf and verify it with a test compilation.
[0m→ [0mRead TASKS.md
[0m→ [0mRead README.md
[0m
[0m$ [0mwhich x86_64-elf-gcc || echo "Not found"
which: no x86_64-elf-gcc in (/home/julien/Desktop/Free-Wiggum-opencode/venv/bin:/home/julien/Desktop/Free-Wiggum-opencode/venv/bin:/home/julien/.vscode-server/data/User/globalStorage/github.copilot-chat/debugCommand:/home/julien/.vscode-server/data/User/globalStorage/github.copilot-chat/copilotCli:/home/julien/.vscode-server/cli/servers/Stable-ce099c1ed25d9eb3076c11e4a280f3eb52b4fbeb/server/bin/remote-cli:/home/julien/.local/bin:/home/julien/.nvm/versions/node/v22.21.1/bin:/usr/local/sbin:/usr/local/bin:/usr/bin:/usr/bin/site_perl:/usr/bin/vendor_perl:/usr/bin/core_perl)
Not found
[0m
[0m$ [0mwhich gcc && gcc --version
/usr/bin/gcc
gcc (GCC) 15.2.1 20260209
Copyright (C) 2025 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
[0m
--
## OpenCode Output

```
[0m
> build · stepfun/step-3.5-flash:free
[0m
I'll set up the cross-compilation toolchain for x86_64-elf and verify it with a test compilation.
[93m[1m! [0mpermission requested: external_directory (/usr/lib/*); auto-rejecting
```

**Guidance:** Continue from where we left off. Don't re-do work already done. Focus on the next incomplete piece.


## CURRENT PROJECT STATE (Iteration 12)

```
# wiggumos
**Mission:** Create a basic OS

## Phase 1: Planning & Setup
- [x] Define system specifications: document target architecture (x86_64), supported features (multitasking, virtual memory), and API design
- [ ] Set up cross-compilation toolchain: install x86_64-elf GCC/binutils, verify with test compilation of C "hello world"
- [ ] Create build system: implement Makefile or CMake with targets for kernel, bootloader, and userland; include clean and all targets
- [ ] Initialize project structure: create `kernel/`, `boot/`, `userland/`, `include/`, and `docs/` directories with skeleton files

## Phase 2: Boot Process
- [ ] Implement multiboot-compliant bootloader: create 512-byte boot sector that loads kernel from FAT32, install GRUB stage2 or write custom
- [ ] Write kernel entry assembly: develop `start.asm` that switches from real to protected mode, sets up stack, and calls `kernel_main()`
- [ ] Initialize essential hardware: write early serial port and VGA text driver for debug output before standard drivers load
- [ ] Set up memory map: parse E820 memory map from BIOS, store available RAM regions, reserve kernel and hardware spaces

## Phase 3: Core Kernel
- [ ] Implement physical memory manager: create bitmap allocator with `pmm_init()`, `pmm_alloc_page()`, `pmm_free_page()` functions
- [ ] Implement virtual memory manager: set up 4-level page tables, enable paging, implement `vmm_map()`, `vmm_unmap()`, and kernel heap allocation
- [ ] Build process scheduler: create PCB structure, ready/waiting queues, context switch assembly, and timer interrupt-driven preemptive scheduling
- [ ] Create system call interface: define syscall numbers, implement `syscall_handler()` in assembly, add C wrappers for `fork()`, `exec()`, `read()`, `write()`, `exit()`

## Phase 4: User Space & Testing
- [ ] Develop basic filesystem driver: implement FAT12/16/32 reading to load programs from disk; create VFS layer with `open()`, `read()`, `close()`
- [ ] Write simple shell: build command interpreter that parses input, executes binaries via `execve()`, supports pipes and background processes
- [ ] Create system utilities: implement `ls`, `cat`, `echo`, `ps`, `clear` as user programs linked against minimal libc
- [ ] Establish test framework: write kernel-level tests for all subsystems, automated QEMU integration tests, and boot validation scripts
```

## NEXT TASK TO COMPLETE:
Set up cross-compilation toolchain: install x86_64-elf GCC/binutils, verify with test compilation of C hello world

**Instructions:** Complete this task. Mark [x] in TASKS.md when done. Create, modify, or delete files as needed. Execute commands as needed. Also update README.md to match this project (name, setup instructions, current progress). No permission needed—just act.
```

## OpenCode Output

```
[0m
> build · stepfun/step-3.5-flash:free
[0m
I see the binutils were built but x86_64-elf-gcc is still not found. I need to build the full GCC cross-compiler. Let me continue setting up the complete toolchain.
[0m$ [0mls -la ~/.local/bin/ | grep x86_64-elf
-rwxr-xr-x 1 julien julien  5435064 Mar 19 09:06 x86_64-elf-addr2line
-rwxr-xr-x 2 julien julien  5602960 Mar 19 09:06 x86_64-elf-ar
-rwxr-xr-x 2 julien julien  7965600 Mar 19 09:06 x86_64-elf-as
-rwxr-xr-x 1 julien julien  5384384 Mar 19 09:06 x86_64-elf-c++filt
-rwxr-xr-x 1 julien julien   116952 Mar 19 09:06 x86_64-elf-elfedit
-rwxr-xr-x 1 julien julien  5957696 Mar 19 09:06 x86_64-elf-gprof
-rwxr-xr-x 4 julien julien  9112496 Mar 19 09:06 x86_64-elf-ld
-rwxr-xr-x 4 julien julien  9112496 Mar 19 09:06 x86_64-elf-ld.bfd
-rwxr-xr-x 2 julien julien  5495392 Mar 19 09:06 x86_64-elf-nm
-rwxr-xr-x 2 julien julien  6219064 Mar 19 09:06 x86_64-elf-objcopy
-rwxr-xr-x 2 julien julien  9518920 Mar 19 09:06 x86_64-elf-objdump
-rwxr-xr-x 2 julien julien  5602984 Mar 19 09:06 x86_64-elf-ranlib
-rwxr-xr-x 2 julien julien  3929304 Mar 19 09:06 x86_64-elf-readelf
-rwxr-xr-x 1 julien julien  5424520 Mar 19 09:06 x86_64-elf-size
-rwxr-xr-x 1 julien julien  5439016 Mar 19 09:06 x86_64-elf-strings
-rwxr-xr-x 2 julien julien  6219064 Mar 19 09:06 x86_64-elf-strip
[0m
[0m$ [0mcd tools && test -d gcc-* && echo "GCC source exists" || echo "Need to download GCC"
Need to download GCC
[0m
Binutils are installed but GCC is missing. I need to download and build the GCC cross-compiler.
[0m$ [0mcd tools && wget -q https://ftp.gnu.org/gnu/gcc/gcc-13.2.0/gcc-13.2.0.tar.xz && tar xf gcc-13.2.0.tar.xz
Now I'll configure and build GCC as a cross-compiler for x86_64-elf:
[0m
[0m$ [0mcd tools/gcc-13.2.0 && ./configure --target=x86_64-elf --prefix=$HOME/.local --disable-nls --without-headers --enable-languages=c --disable-shared --disable-libssp --disable-libstdcxx-pch
checking build system type... x86_64-pc-linux-gnu
checking host system type... x86_64-pc-linux-gnu
checking target system type... x86_64-pc-elf
checking for a BSD-compatible install... /usr/bin/install -c
checking whether ln works... yes
checking whether ln -s works... yes
checking for a sed that does not truncate output... /usr/bin/sed
checking for gawk... gawk
checking for libatomic support... no
checking for libitm support... no
checking for libsanitizer support... no
checking for libvtv support... no
checking for libphobos support... no
checking for gcc... gcc
checking whether the C compiler works... yes
checking for C compiler default output file name... a.out
checking for suffix of executables... 
checking whether we are cross compiling... no
checking for suffix of object files... o
checking whether we are using the GNU C compiler... yes
checking whether gcc accepts -g... yes
checking for gcc option to accept ISO C89... none needed
checking for gcc option to accept ISO C99... none needed
checking for g++... g++
checking whether we are using the GNU C++ compiler... yes
checking whether g++ accepts -g... yes
checking whether g++ accepts -static-libstdc++ -static-libgcc... yes
checking for gnatbind... no
checking for gnatmake... no
checking whether compiler driver understands Ada and is recent enough... no
checking for gdc... no
checking whether the D compiler works... no
checking how to compare bootstrapped objects... cmp --ignore-initial=16 $$f1 $$f2
checking whether g++ supports C++11 features by default... yes
checking for objdir... .libs
checking for the correct version of gmp.h... yes
checking for the correct version of mpfr.h... yes
checking for the correct version of mpc.h... yes
checking for the correct version of the gmp/mpfr libraries... yes
checking for the correct version of the mpc libraries... yes
checking for isl 0.15 or later... yes
*** This configuration is not supported in the following subdirectories:
     target-libgomp target-libatomic target-libitm target-libsanitizer target-libvtv target-libphobos gnattools gotools target-libada target-libstdc++-v3 target-zlib target-libbacktrace target-libgfortran target-libgo target-libffi target-libgm2 target-libobjc target-libssp
    (Any other directories should still work fine.)
checking for default BUILD_CONFIG... 
checking for --enable-vtable-verify... no
checking for bison... bison -y
checking for bison... bison
checking for gm4... no
checking for gnum4... no
checking for m4... m4
checking for flex... flex
checking for flex... flex
checking for makeinfo... makeinfo
checking for expect... no
checking for runtest... no
checking for ar... ar
checking for as... as
checking for dlltool... no
checking for dsymutil... no
checking for ld... ld
checking for lipo... no
checking for nm... nm
checking for ranlib... ranlib
checking for strip... strip
checking for windres... no
checking for windmc... no
checking for objcopy... objcopy
checking for objdump... objdump
checking for otool... no
checking for readelf... readelf
checking for x86_64-elf-cc... no
checking for x86_64-elf-gcc... no
checking for x86_64-elf-c++... no
checking for x86_64-elf-g++... no
checking for x86_64-elf-cxx... no
checking for x86_64-elf-gxx... no
checking for x86_64-elf-gcc... no
checking for x86_64-elf-gfortran... no
checking for x86_64-elf-gccgo... no
checking for x86_64-elf-gdc... no
checking for x86_64-elf-gm2... no
checking for ar... /home/julien/.local/x86_64-elf/bin/ar
checking for as... /home/julien/.local/x86_64-elf/bin/as
checking for dlltool... no
checking for x86_64-elf-dlltool... no
checking for dsymutil... no
checking for x86_64-elf-dsymutil... no
checking for ld... /home/julien/.local/x86_64-elf/bin/ld
checking for lipo... no
checking for x86_64-elf-lipo... no
checking for nm... /home/julien/.local/x86_64-elf/bin/nm
checking for objcopy... /home/julien/.local/x86_64-elf/bin/objcopy
checking for objdump... /home/julien/.local/x86_64-elf/bin/objdump
checking for otool... no
checking for x86_64-elf-otool... no
checking for ranlib... /home/julien/.local/x86_64-elf/bin/ranlib
checking for readelf... /home/julien/.local/x86_64-elf/bin/readelf
checking for strip... /home/julien/.local/x86_64-elf/bin/strip
checking for windres... no
checking for x86_64-elf-windres... no
checking for windmc... no
checking for x86_64-elf-windmc... no
checking where to find the target ar... pre-installed in /home/julien/.local/x86_64-elf/bin
checking where to find the target as... pre-installed in /home/julien/.local/x86_64-elf/bin
checking where to find the target cc... just compiled
checking where to find the target c++... pre-installed
checking where to find the target c++ for libstdc++... pre-installed
checking where to find the target dlltool... pre-installed
checking where to find the target dsymutil... pre-installed
checking where to find the target gcc... just compiled
checking where to find the target gfortran... pre-installed
checking where to find the target gccgo... pre-installed
checking where to find the target gdc... pre-installed
checking where to find the target gm2... pre-installed
checking where to find the target ld... pre-installed in /home/julien/.local/x86_64-elf/bin
checking where to find the target lipo... pre-installed
checking where to find the target nm... pre-installed in /home/julien/.local/x86_64-elf/bin
checking where to find the target objcopy... pre-installed in /home/julien/.local/x86_64-elf/bin
checking where to find the target objdump... pre-installed in /home/julien/.local/x86_64-elf/bin
checking where to find the target otool... pre-installed
checking where to find the target ranlib... pre-installed in /home/julien/.local/x86_64-elf/bin
checking where to find the target readelf... pre-installed in /home/julien/.local/x86_64-elf/bin
checking where to find the target strip... pre-installed in /home/julien/.local/x86_64-elf/bin
checking where to find the target windres... pre-installed
checking where to find the target windmc... pre-installed
checking whether to enable maintainer-specific portions of Makefiles... no
configure: creating ./config.status
config.status: creating Makefile
[0m
Configuration successful. Now I'll build GCC (this will take a while):
[0m$ [0mcd tools/gcc-13.2.0 && make -j$(nproc) all-gcc
mkdir -p -- host-x86_64-pc-linux-gnu/intl
mkdir -p -- host-x86_64-pc-linux-gnu/libiberty
mkdir -p -- host-x86_64-pc-linux-gnu/lto-plugin
Configuring in host-x86_64-pc-linux-gnu/intl
Configuring in host-x86_64-pc-linux-gnu/lto-plugin
Configuring in host-x86_64-pc-linux-gnu/libiberty
mkdir -p -- build-x86_64-pc-linux-gnu/libiberty
Configuring in build-x86_64-pc-linux-gnu/libiberty
configure: creating cache ./config.cache
checking for x86_64-pc-linux-gnu-gcc... gcc
configure: creating cache ./config.cache
configure: creating cache ./config.cache
configure: creating cache ./config.cache
checking whether to enable maintainer-specific portions of Makefiles... no
checking for makeinfo... makeinfo
checking whether to enable maintainer-specific portions of Makefiles... no
checking for makeinfo... makeinfo
checking build system type... x86_64-pc-linux-gnu
checking host system type... checking whether the C compiler works... x86_64-pc-linux-gnu
checking target system type... x86_64-pc-elf
checking for a BSD-compatible install... /usr/bin/install -c
checking whether build environment is sane... yes
checking for a thread-safe mkdir -p... /usr/bin/mkdir -p
checking for gawk... gawk
checking whether make sets $(MAKE)... yes
checking whether make supports nested variables... yes
yes
checking for C compiler default output file name... a.out
checking for suffix of executables... checking whether to enable maintainer-specific portions of Makefiles... no
checking for style of include used by make... checking for perl... perl
GNU
checking for x86_64-pc-linux-gnu-gcc... gcc
checking build system type... checking for perl... perl
x86_64-pc-linux-gnu
checking host system type... checking build system type... x86_64-pc-linux-gnu
checking for x86_64-pc-linux-gnu-ar... ar
checking for x86_64-pc-linux-gnu-ranlib... ranlib
checking whether to install libiberty headers and static library... no
configure: target_header_dir = 
checking for x86_64-pc-linux-gnu-gcc... gcc
x86_64-pc-linux-gnu
checking host system type... checking whether the C compiler works... x86_64-pc-linux-gnu
checking for x86_64-pc-linux-gnu-ar... ar
checking for x86_64-pc-linux-gnu-ranlib... ranlib
checking whether to install libiberty headers and static library... no
configure: target_header_dir = 
checking for x86_64-pc-linux-gnu-gcc... gcc

checking whether we are cross compiling... yes
checking for C compiler default output file name... a.out
checking for suffix of executables... checking whether the C compiler works... checking whether the C compiler works... no
checking for suffix of object files... 
checking whether we are cross compiling... o
checking whether we are using the GNU C compiler... yes
checking for C compiler default output file name... a.out
checking for suffix of executables... yes
checking for C compiler default output file name... a.out
checking for suffix of executables... yes
checking whether gcc accepts -g... no
checking for suffix of object files... 
checking whether we are cross compiling... 
checking whether we are cross compiling... yes
checking for gcc option to accept ISO C89... o
checking whether we are using the GNU C compiler... yes
checking whether gcc accepts -g... no
none needed
checking how to run the C preprocessor... no
checking for suffix of object files... checking for suffix of object files... yes
checking for gcc option to accept ISO C89... o
checking whether we are using the GNU C compiler... gcc -E
o
checking whether we are using the GNU C compiler... yes
checking whether gcc accepts -g... yes
checking whether gcc accepts -g... checking for grep that handles long lines and -e... /usr/bin/grep
checking for egrep... /usr/bin/grep -E
checking for ANSI C header files... none needed
checking whether gcc understands -c and -o together... yes
checking for gcc option to accept ISO C89... yes
checking for gcc option to accept ISO C89... yes
checking dependency style of gcc... none needed
checking how to run the C preprocessor... none needed
checking how to run the C preprocessor... gcc3
checking how to run the C preprocessor... gcc -E
gcc -E
checking for grep that handles long lines and -e... checking for grep that handles long lines and -e... /usr/bin/grep
checking for egrep... /usr/bin/grep
checking for egrep... /usr/bin/grep -E
checking for ANSI C header files... /usr/bin/grep -E
checking for ANSI C header files... gcc -E
yes
checking for sys/types.h... checking for grep that handles long lines and -e... /usr/bin/grep
checking for egrep... /usr/bin/grep -E
checking for ANSI C header files... yes
checking for sys/stat.h... yes
checking for stdlib.h... yes
yes
checking for sys/types.h... checking for string.h... yes
checking for sys/types.h... yes
yes
yes
checking for sys/stat.h... checking for sys/stat.h... checking for memory.h... yes
checking for sys/types.h... yes
yes
yes
yes
checking for stdlib.h... checking for sys/stat.h... checking for strings.h... checking for stdlib.h... yes
yes
yes
checking for string.h... yes
checking for inttypes.h... checking for stdlib.h... checking for string.h... yes
yes
checking for memory.h... yes
checking for string.h... checking for stdint.h... yes
checking for memory.h... yes
yes
yes
checking for unistd.h... checking for strings.h... checking for memory.h... yes
checking for strings.h... yes
yes
checking for inttypes.h... checking for strings.h... yes
checking minix/config.h usability... yes
checking for inttypes.h... yes
yes
checking for inttypes.h... no
checking minix/config.h presence... checking for stdint.h... yes
checking for stdint.h... no
checking for minix/config.h... no
checking whether it is safe to define __EXTENSIONS__... yes
yes
checking for unistd.h... checking for stdint.h... yes
checking for unistd.h... yes
checking whether make sets $(MAKE)... yes
checking for a BSD-compatible install... yes
/usr/bin/install -c
checking whether NLS is requested... no
yes
checking minix/config.h usability... checking for msgfmt... checking for unistd.h... /usr/bin/msgfmt
checking for gmsgfmt... /usr/bin/msgfmt
checking for xgettext... yes
checking minix/config.h usability... /usr/bin/xgettext
checking for msgmerge... /usr/bin/msgmerge
no
checking minix/config.h presence... yes
checking minix/config.h usability... no
checking for minix/config.h... no
checking whether it is safe to define __EXTENSIONS__... no
checking minix/config.h presence... checking build system type... x86_64-pc-linux-gnu
checking host system type... x86_64-pc-linux-gnu
checking for x86_64-pc-linux-gnu-ranlib... ranlib
checking for library containing strerror... no
checking for minix/config.h... no
checking whether it is safe to define __EXTENSIONS__... no
checking minix/config.h presence... yes
checking for special C compiler options needed for large files... no
checking for _FILE_OFFSET_BITS value needed for large files... no
checking for minix/config.h... no
checking whether it is safe to define __EXTENSIONS__... yes
checking for special C compiler options needed for large files... no
checking for _FILE_OFFSET_BITS value needed for large files... none required
checking for an ANSI C-conforming const... no
checking whether gcc supports -W... no
yes
checking for inline... checking whether gcc supports -W... yes
yes
checking for x86_64-pc-linux-gnu-gcc... (cached) gcc
checking whether gcc supports -Wall... inline
checking for off_t... yes
checking whether gcc supports -Wall... checking whether we are using the GNU C compiler... (cached) yes
checking whether gcc accepts -g... (cached) yes
checking for gcc option to accept ISO C89... (cached) none needed
checking whether gcc understands -c and -o together... (cached) yes
checking dependency style of gcc... (cached) gcc3
checking for special C compiler options needed for large files... no
checking for _FILE_OFFSET_BITS value needed for large files... yes
checking whether gcc supports -Wwrite-strings... yes
checking whether gcc supports -Wwrite-strings... no
checking whether gcc supports -Wall... yes
checking whether gcc supports -Wc++-compat... yes
checking whether gcc supports -Wc++-compat... yes
checking for -static-libgcc... yes
checking whether gcc supports -Wstrict-prototypes... yes
checking whether gcc supports -Wstrict-prototypes... yes
checking for size_t... yes
yes
checking for CET support... checking whether gcc supports -Wshadow=local... yes
checking whether gcc supports -Wshadow=local... yes
checking whether gcc supports -pedantic ... yes
checking whether gcc supports -pedantic ... yes
checking whether gcc and cc understand -c and -o together... yes
checking whether gcc and cc understand -c and -o together... yes
checking for working alloca.h... yes
checking for alloca... yes
checking whether symbol versioning is supported... yes
checking for an ANSI C-conforming const... yes
checking for an ANSI C-conforming const... yes
checking for stdlib.h... (cached) yes
checking for unistd.h... (cached) yes
checking for sys/param.h... yes
checking for inline... gnu
checking pthread.h usability... yes
checking for inline... inline
checking whether byte ordering is bigendian... inline
checking whether byte ordering is bigendian... yes
checking for getpagesize... yes
checking pthread.h presence... yes
checking for pthread.h... yes
checking how to print strings... printf
checking for a sed that does not truncate output... /usr/bin/sed
checking for fgrep... /usr/bin/grep -F
checking for ld used by gcc... ld
checking if the linker (ld) is GNU ld... yes
checking for BSD- or MS-compatible name lister (nm)... nm
checking the name lister (nm) interface... yes
checking for working mmap... no
checking for a BSD-compatible install... /usr/bin/install -c
checking for CET support... BSD nm
checking whether ln -s works... yes
checking the maximum length of command line arguments... no
checking for a BSD-compatible install... 1572864
checking whether the shell understands some XSI constructs... yes
checking whether the shell understands "+="... yes
checking for ld option to reload object files... -r
checking for x86_64-pc-linux-gnu-objdump... objdump
checking how to recognize dependent libraries... /usr/bin/install -c
checking for CET support... pass_all
checking for x86_64-pc-linux-gnu-ar... ar
checking for x86_64-pc-linux-gnu-strip... no
checking for strip... strip
checking for x86_64-pc-linux-gnu-ranlib... ranlib
checking command to parse nm output from gcc object... yes
checking whether we are using the GNU C Library 2.1 or newer... yes
checking whether integer division by zero raises SIGFPE... ok
checking for dlfcn.h... yes
checking for inttypes.h... yes
checking for sys/file.h... yes
yes
yes
checking for stdint.h... checking for objdir... .libs
checking for sys/file.h... yes
checking for sys/param.h... yes
checking for sys/param.h... yes
checking for unsigned long long... yes
checking for limits.h... yes
yes
checking for limits.h... checking for stdlib.h... (cached) yes
checking for malloc.h... yes
checking for inttypes.h... checking if gcc supports -fno-rtti -fno-exceptions... yes
checking for stdlib.h... (cached) yes
yes
checking for malloc.h... no
checking for gcc option to produce PIC... -fPIC -DPIC
checking if gcc PIC flag -fPIC -DPIC works... checking for string.h... (cached) yes
checking for unistd.h... (cached) yes
yes
checking whether the inttypes.h PRIxNN macros are broken... checking for strings.h... (cached) yes
yes
checking for sys/time.h... yes
checking if gcc static flag -static works... checking for string.h... (cached) yes
checking for unistd.h... (cached) yes
no
checking for ld used by GCC... yes
ld
checking if the linker (ld) is GNU ld... egrep: warning: egrep is obsolescent; using grep -E
checking for strings.h... (cached) yes
yes
checking for shared library run path origin... checking for time.h... checking for sys/time.h... egrep: warning: egrep is obsolescent; using grep -E
yes
yes
done
checking for time.h... checking for sys/resource.h... checking argz.h usability... yes
yes
checking for sys/resource.h... checking for sys/stat.h... (cached) yes
checking for sys/mman.h... yes
checking for sys/stat.h... (cached) yes
yes
checking if gcc supports -c -o file.o... checking for sys/mman.h... yes
yes
checking argz.h presence... checking for fcntl.h... yes
yes
checking for argz.h... yes
checking for fcntl.h... yes
checking limits.h usability... checking for alloca.h... yes
yes
checking if gcc supports -c -o file.o... (cached) yes
checking whether the gcc linker (ld -m elf_x86_64) supports shared libraries... checking for alloca.h... yes
yes
checking whether -lc should be explicitly linked in... yes
checking for sys/pstat.h... checking for sys/pstat.h... yes
checking limits.h presence... no
checking for sys/sysmp.h... no
yes
checking for limits.h... yes
checking for sys/sysmp.h... no
checking dynamic linker characteristics... checking locale.h usability... no
checking for sys/sysinfo.h... no
checking for sys/sysinfo.h... yes
checking for machine/hal_sysinfo.h... yes
checking for machine/hal_sysinfo.h... yes
checking locale.h presence... no
checking for sys/table.h... no
yes
checking for locale.h... yes
checking for sys/table.h... checking nl_types.h usability... no
checking for sys/sysctl.h... no
checking for sys/sysctl.h... GNU/Linux ld.so
checking how to hardcode library paths into programs... immediate
checking whether stripping libraries is possible... yes
checking if libtool supports shared libraries... yes
checking whether to build shared libraries... yes
checking whether to build static libraries... yes
checking for int64_t... no
checking for sys/systemcfg.h... no
checking for sys/systemcfg.h... yes
checking nl_types.h presence... no
no
checking for stdint.h... (cached) yes
checking for stdint.h... (cached) yes
yes
checking for nl_types.h... yes
checking for stdio_ext.h... checking for stdio_ext.h... checking malloc.h usability... yes
yes
checking for process.h... checking for process.h... no
no
checking for sys/prctl.h... yes
checking malloc.h presence... checking for sys/prctl.h... yes
yes
yes
checking for uint64_t... checking for sys/wait.h that is POSIX.1 compatible... checking for sys/wait.h that is POSIX.1 compatible... yes
checking for malloc.h... yes
checking stddef.h usability... yes
checking whether time.h and sys/time.h may both be included... yes
checking whether time.h and sys/time.h may both be included... yes
checking stddef.h presence... yes
checking for sys/wait.h that is POSIX.1 compatible... yes
checking for stddef.h... yes
checking for stdlib.h... (cached) yes
yes
checking whether errno must be declared... yes
checking whether errno must be declared... checking for string.h... (cached) yes
checking for unistd.h... (cached) yes
checking for sys/param.h... (cached) yes
checking for feof_unlocked... yes
no
checking size of int... no
checking size of int... configure: updating cache ./config.cache
checking that generated files are newer than configure... done
configure: creating ./config.status
yes
checking for fgets_unlocked... 4
checking size of long... 4
checking size of long... yes
checking for getc_unlocked... 8
yes
checking size of size_t... 8
checking size of size_t... checking for getcwd... yes
checking for getegid... 8
checking for long long... 8
checking for long long... yes
checking for geteuid... yes
yes
checking size of long long... checking for getgid... yes
checking size of long long... yes
checking for getuid... 8
checking for a 64-bit type... 8
checking for a 64-bit type... yes
checking for mempcpy... uint64_t
checking for intptr_t... uint64_t
checking for intptr_t... yes
config.status: creating Makefile
checking for munmap... config.status: creating config.h
config.status: executing depfiles commands
yes
checking for uintptr_t... config.status: executing libtool commands
yes
checking for uintptr_t... yes
checking for putenv... mkdir -p -- build-x86_64-pc-linux-gnu/fixincludes
Configuring in build-x86_64-pc-linux-gnu/fixincludes
yes
checking for setenv... yes
checking for ssize_t... yes
checking for ssize_t... yes
checking for setlocale... yes
checking for pid_t... yes
yes
checking for pid_t... configure: creating cache ./config.cache
checking for stpcpy... checking build system type... x86_64-pc-linux-gnu
checking host system type... x86_64-pc-linux-gnu
checking target system type... x86_64-pc-elf
checking for x86_64-pc-linux-gnu-gcc... gcc
yes
checking for strcasecmp... checking whether the C compiler works... yes
checking for library containing strerror... yes
checking for library containing strerror... yes
checking for C compiler default output file name... a.out
yes
checking for suffix of executables... checking for strdup... none required
checking for asprintf... none required
checking for asprintf... 
checking whether we are cross compiling... yes
checking for strtoul... yes
checking for atexit... yes
checking for atexit... no
checking for suffix of object files... yes
checking for tsearch... yes
yes
o
checking whether we are using the GNU C compiler... checking for basename... checking for basename... yes
checking whether gcc accepts -g... yes
checking for __argz_count... yes
yes
checking for bcmp... checking for bcmp... yes
checking for gcc option to accept ISO C89... yes
checking for __argz_stringify... yes
checking for bcopy... none needed
checking how to run the C preprocessor... yes
checking for bcopy... yes
gcc -E
checking for __argz_next... yes
checking for bsearch... checking for grep that handles long lines and -e... yes
/usr/bin/grep
checking for egrep... /usr/bin/grep -E
checking for ANSI C header files... checking for bsearch... yes
checking for __fsetlocking... yes
checking for bzero... yes
checking for bzero... yes
checking for iconv... yes
checking for calloc... yes
checking for calloc... yes
checking for iconv declaration... yes
checking for clock... yes
yes
checking for sys/types.h... checking for clock... 
         extern size_t iconv (iconv_t cd, char * *inbuf, size_t *inbytesleft, char * *outbuf, size_t *outbytesleft);
checking for nl_langinfo and CODESET... yes
yes
checking for ffs... checking for sys/stat.h... yes
checking for ffs... yes
checking for LC_MESSAGES... yes
checking for stdlib.h... yes
yes
checking for bison... bison
checking version of bison... checking for getcwd... 3.8.2, ok
checking whether NLS is requested... no
checking whether to use NLS... no
checking for aclocal... aclocal
yes
checking for autoconf... autoconf
checking for autoheader... autoheader
checking bison 3 or later... 3.8.2, bison3
yes
checking for string.h... checking for getcwd... configure: updating cache ./config.cache
configure: creating ./config.status
yes
yes
checking for getpagesize... checking for memory.h... yes
checking for getpagesize... yes
checking for strings.h... yes
checking for gettimeofday... yes
config.status: creating Makefile
checking for gettimeofday... config.status: creating config.intl
yes
checking for inttypes.h... config.status: creating config.h
config.status: executing default-1 commands
yes
checking for index... yes
yes
checking for index... checking for stdint.h... mkdir -p -- build-x86_64-pc-linux-gnu/libcpp
Configuring in build-x86_64-pc-linux-gnu/libcpp
yes
checking for insque... yes
checking for unistd.h... yes
checking for insque... yes
checking minix/config.h usability... yes
checking for memchr... yes
checking for memchr... no
checking minix/config.h presence... configure: creating cache ./config.cache
checking build system type... yes
no
checking for minix/config.h... no
checking whether it is safe to define __EXTENSIONS__... x86_64-pc-linux-gnu
checking host system type... checking for memcmp... yes
x86_64-pc-linux-gnu
checking target system type... checking for memcmp... x86_64-pc-elf
checking whether make sets $(MAKE)... yes
checking for a BSD-compatible install... /usr/bin/install -c
checking for x86_64-pc-linux-gnu-gcc... gcc
yes
checking for a sed that does not truncate output... /usr/bin/sed
checking whether gcc supports -W... checking whether the C compiler works... yes
checking for memcpy... yes
yes
checking whether gcc supports -Wall... checking for memcpy... yes
checking for C compiler default output file name... a.out
checking for suffix of executables... yes
checking whether gcc supports -Wwrite-strings... yes
yes
checking for memmem... checking whether gcc supports -Wstrict-prototypes... yes

checking whether we are cross compiling... checking for memmem... yes
checking whether gcc supports -Wmissing-prototypes... yes
checking whether gcc supports -Wold-style-definition... yes
checking for memmove... no
checking for suffix of object files... yes
checking for memmove... yes
checking whether gcc supports -Wmissing-format-attribute... o
checking whether we are using the GNU C compiler... yes
checking whether gcc supports -Woverlength-strings... yes
checking for mempcpy... yes
yes
checking whether gcc accepts -g... checking for mempcpy... yes
checking whether gcc supports -pedantic -Wlong-long... yes
checking for gcc option to accept ISO C89... yes
checking for ANSI C header files... (cached) yes
checking stddef.h usability... yes
yes
checking for memset... checking for memset... none needed
yes
checking stddef.h presence... checking whether we are using the GNU C++ compiler... yes
checking for stddef.h... yes
checking for stdlib.h... (cached) yes
yes
yes
checking for mkstemps... checking for strings.h... (cached) yes
checking for mkstemps... checking for unistd.h... (cached) yes
yes
checking whether g++ accepts -g... checking fcntl.h usability... yes
checking for x86_64-pc-linux-gnu-ranlib... ranlib
checking for x86_64-pc-linux-gnu-ar... ar
checking how to run the C preprocessor... yes
checking for putenv... yes
yes
checking fcntl.h presence... checking for putenv... gcc -E
yes
checking for fcntl.h... yes
checking sys/file.h usability... checking for grep that handles long lines and -e... /usr/bin/grep
checking for egrep... /usr/bin/grep -E
checking for ANSI C header files... yes
yes
checking for random... checking for random... yes
checking sys/file.h presence... yes
checking for sys/file.h... yes
checking for sys/stat.h... (cached) yes
checking for clearerr_unlocked... yes
checking for rename... yes
checking for rename... yes
checking for feof_unlocked... yes
checking for rindex... yes
checking for rindex... yes
checking for ferror_unlocked... yes
yes
checking for sys/types.h... checking for setenv... yes
checking for setenv... yes
checking for sys/stat.h... yes
checking for fflush_unlocked... yes
checking for snprintf... yes
yes
checking for stdlib.h... checking for snprintf... yes
yes
checking for fgetc_unlocked... yes
checking for string.h... checking for sigsetmask... yes
checking for sigsetmask... yes
checking for memory.h... yes
checking for stpcpy... yes
checking for fgets_unlocked... yes
yes
checking for strings.h... checking for stpcpy... yes
yes
checking for fileno_unlocked... checking for stpncpy... yes
yes
checking for inttypes.h... checking for stpncpy... yes
checking for fprintf_unlocked... yes
yes
checking for stdint.h... checking for strcasecmp... yes
checking for strcasecmp... yes
checking for unistd.h... yes
checking for strchr... no
checking for fputc_unlocked... yes
checking minix/config.h usability... yes
checking for strchr... yes
checking for strdup... yes
no
checking minix/config.h presence... checking for fputs_unlocked... no
checking for minix/config.h... no
checking whether it is safe to define __EXTENSIONS__... yes
yes
checking for strncasecmp... checking for strdup... yes
checking for fread_unlocked... yes
checking for special C compiler options needed for large files... no
checking for _FILE_OFFSET_BITS value needed for large files... yes
checking for strndup... no
checking for aclocal... aclocal
checking for autoconf... autoconf
checking for autoheader... autoheader
checking whether gcc supports -W... yes
checking for strncasecmp... yes
checking for fwrite_unlocked... yes
checking whether gcc supports -Wall... yes
checking for strnlen... yes
checking whether gcc supports -Wnarrowing... yes
checking for strndup... yes
yes
checking for getchar_unlocked... checking whether gcc supports -Wwrite-strings... yes
checking for strrchr... yes
checking whether gcc supports -Wmissing-format-attribute... yes
checking for strnlen... yes
checking whether gcc supports -Wstrict-prototypes... yes
checking for getc_unlocked... yes
checking for strstr... yes
checking whether gcc supports -Wmissing-prototypes... yes
yes
checking whether gcc supports -Wold-style-definition... yes
checking for strrchr... checking for putchar_unlocked... yes
checking for strtod... yes
checking whether gcc supports -Wc++-compat... yes
yes
checking whether gcc supports -pedantic -Wlong-long... yes
checking for putc_unlocked... checking for strstr... yes
checking for strtol... yes
checking whether gcc supports -fno-exceptions... yes
yes
checking whether gcc supports -fno-rtti... checking whether abort is declared... yes
yes
checking for strtoul... checking for strtod... yes
yes
checking dependency style of g++... checking whether asprintf is declared... yes
checking for strtoll... yes
checking for strtol... gcc3
checking whether time.h and sys/time.h may both be included... yes
checking whether basename is declared... yes
yes
checking whether string.h and strings.h may both be included... checking for strtoull... yes
checking for strtoul... yes
checking whether errno is declared... yes
checking locale.h usability... yes
checking for strverscmp... yes
no
checking whether vasprintf is declared... checking for strtoll... yes
checking locale.h presence... yes
checking for locale.h... yes
checking fcntl.h usability... yes
checking for tmpnam... yes
checking whether memmem is declared... yes
checking for strtoull... yes
checking fcntl.h presence... yes
checking for fcntl.h... yes
yes
checking limits.h usability... checking for vasprintf... yes
checking whether clearerr_unlocked is declared... yes
checking for strverscmp... yes
checking limits.h presence... yes
checking for limits.h... yes
yes
checking stddef.h usability... yes
checking for vfprintf... checking whether feof_unlocked is declared... yes
checking for tmpnam... yes
checking stddef.h presence... yes
checking for stddef.h... yes
yes
checking for stdlib.h... (cached) yes
checking for vprintf... yes
checking for strings.h... (cached) yes
checking whether ferror_unlocked is declared... checking for string.h... (cached) yes
checking sys/file.h usability... yes
checking for vasprintf... yes
yes
checking for vsnprintf... checking whether fflush_unlocked is declared... yes
checking sys/file.h presence... yes
checking for vfprintf... yes
checking for sys/file.h... yes
checking for unistd.h... (cached) yes
checking whether byte ordering is bigendian... yes
checking for vsprintf... yes
checking whether fgetc_unlocked is declared... yes
checking for vprintf... yes
yes
checking whether fgets_unlocked is declared... checking for waitpid... no
checking for an ANSI C-conforming const... yes
checking for vsnprintf... yes
checking for inline... yes
yes
checking for setproctitle... checking whether fileno_unlocked is declared... inline
checking for obstacks... yes
checking for vsprintf... no
checking whether alloca needs Cray hooks... yes
checking whether fprintf_unlocked is declared... no
checking stack direction for C alloca... yes
checking for off_t... no
checking whether fputc_unlocked is declared... yes
checking for waitpid... 1
checking for vfork.h... no
checking for fork... yes
yes
checking for setproctitle... checking whether fputs_unlocked is declared... yes
checking for size_t... yes
checking for vfork... yes
checking whether fread_unlocked is declared... no
checking whether alloca needs Cray hooks... no
checking stack direction for C alloca... yes
checking for working fork... yes
checking for ssize_t... yes
checking whether fwrite_unlocked is declared... 1
checking for vfork.h... yes
checking for working vfork... (cached) yes
checking for _doprnt... no
checking for fork... yes
checking whether getchar_unlocked is declared... yes
checking for uintptr_t... no
checking for sys_errlist... yes
checking for vfork... yes
checking whether getc_unlocked is declared... no
checking for sys_nerr... yes
checking for working fork... yes
yes
checking for ptrdiff_t... checking whether putchar_unlocked is declared... no
checking for sys_siglist... yes
checking whether putc_unlocked is declared... yes
checking for working vfork... (cached) yes
checking for _doprnt... no
checking for external symbol _system_configuration... yes
checking for uint64_t... yes
checking for an ANSI C-conforming const... no
checking for __fsetlocking... no
checking for sys_errlist... yes
checking sys/mman.h usability... yes
checking whether struct tm is in sys/time.h or time.h... yes
checking for canonicalize_file_name... yes
checking sys/mman.h presence... no
checking for sys_nerr... yes
checking for sys/mman.h... yes
checking for mmap... time.h
checking size of int... yes
checking for dup3... yes
checking whether read-only mmap of a plain file works... yes
checking whether mmap from /dev/zero works... yes
checking for MAP_ANON(YMOUS)... no
checking for sys_siglist... 4
checking size of long... yes
yes
checking whether mmap with MAP_ANON(YMOUS) works... yes
checking whether to enable maintainer-specific portions of Makefiles... no
checking for getrlimit... no
checking for external symbol _system_configuration... configure: updating cache ./config.cache
configure: creating ./config.status
no
checking for __fsetlocking... yes
checking for getrusage... 8
checking for clearerr_unlocked... yes
checking for canonicalize_file_name... config.status: creating Makefile
yes
checking for getsysinfo... config.status: creating mkheaders.almost
config.status: creating config.h
yes
yes
checking for feof_unlocked... checking for dup3... no
checking for gettimeofday... (cached) yes
mkdir -p -- host-x86_64-pc-linux-gnu/zlib
Configuring in host-x86_64-pc-linux-gnu/zlib
checking for on_exit... yes
checking for getrlimit... yes
checking for ferror_unlocked... yes
checking for pipe2... yes
checking for getrusage... yes
checking for fflush_unlocked... yes
checking for psignal... configure: creating cache ./config.cache
checking build system type... x86_64-pc-linux-gnu
checking host system type... x86_64-pc-linux-gnu
checking target system type... yes
x86_64-pc-elf
checking for getsysinfo... checking for a BSD-compatible install... yes
checking for fgetc_unlocked... /usr/bin/install -c
checking whether build environment is sane... yes
yes
checking for a thread-safe mkdir -p... checking for pstat_getdynamic... /usr/bin/mkdir -p
checking for gawk... gawk
checking whether make sets $(MAKE)... yes
checking whether make supports nested variables... yes
no
checking for gettimeofday... (cached) yes
checking whether to enable maintainer-specific portions of Makefiles... no
checking for x86_64-pc-linux-gnu-gcc... gcc
checking for on_exit... yes
checking for fgets_unlocked... no
checking for pstat_getstatic... yes
checking for pipe2... yes
checking for fileno_unlocked... checking whether the C compiler works... no
checking for realpath... yes
checking for psignal... yes
yes
checking for C compiler default output file name... a.out
checking for suffix of executables... checking for fprintf_unlocked... yes
checking for setrlimit... yes

checking whether we are cross compiling... checking for pstat_getdynamic... no
checking for fputc_unlocked... yes
checking for spawnve... no
checking for pstat_getstatic... no
checking for suffix of object files... yes
no
checking for fputs_unlocked... checking for spawnvpe... o
checking whether we are using the GNU C compiler... no
checking for realpath... yes
checking whether gcc accepts -g... yes
checking for fread_unlocked... no
checking for strerror... yes
checking for gcc option to accept ISO C89... yes
checking for setrlimit... yes
yes
checking for fwrite_unlocked... checking for strsignal... none needed
checking whether gcc understands -c and -o together... yes
checking for spawnve... yes
yes
checking for sysconf... checking for getchar_unlocked... yes
checking for style of include used by make... GNU
checking dependency style of gcc... no
checking for spawnvpe... gcc3
yes
checking for CET support... yes
checking for getc_unlocked... checking for sysctl... yes
checking how to print strings... printf
checking for a sed that does not truncate output... /usr/bin/sed
checking for grep that handles long lines and -e... no
/usr/bin/grep
checking for egrep... checking for strerror... /usr/bin/grep -E
checking for fgrep... /usr/bin/grep -F
checking for ld used by gcc... ld
checking if the linker (ld) is GNU ld... yes
checking for BSD- or MS-compatible name lister (nm)... nm
checking the name lister (nm) interface... no
checking for sysmp... yes
checking for putchar_unlocked... yes
checking for strsignal... BSD nm
checking whether ln -s works... yes
checking the maximum length of command line arguments... 1572864
checking whether the shell understands some XSI constructs... yes
checking whether the shell understands "+="... yes
checking for ld option to reload object files... -r
checking for x86_64-pc-linux-gnu-objdump... objdump
checking how to recognize dependent libraries... pass_all
checking for x86_64-pc-linux-gnu-ar... ar
checking for x86_64-pc-linux-gnu-strip... no
checking for strip... strip
checking for x86_64-pc-linux-gnu-ranlib... ranlib
checking command to parse nm output from gcc object... no
checking for table... yes
checking for putc_unlocked... yes
checking for sysconf... no
checking for times... yes
yes
checking whether abort is declared... ok
checking for sysctl... checking how to run the C preprocessor... yes
checking for wait3... gcc -E
yes
checking whether asprintf is declared... no
checking for sysmp... yes
checking for wait4... checking for ANSI C header files... yes
checking whether basename is declared... no
checking for table... yes
checking for sbrk... yes
checking whether errno is declared... no
checking for times... yes
checking whether basename is declared... no
checking whether getopt is declared... yes
checking for wait3... yes
yes
checking for sys/types.h... checking whether ffs is declared... yes
yes
checking whether vasprintf is declared... checking for sys/stat.h... yes
yes
checking for wait4... checking whether asprintf is declared... yes
checking for stdlib.h... yes
checking whether clearerr_unlocked is declared... yes
yes
yes
checking for string.h... checking for sbrk... checking whether vasprintf is declared... yes
checking whether feof_unlocked is declared... yes
checking for memory.h... yes
checking whether snprintf is declared... yes
yes
checking whether basename is declared... checking for strings.h... yes
checking whether ferror_unlocked is declared... yes
yes
checking whether vsnprintf is declared... checking for inttypes.h... yes
checking whether ffs is declared... yes
checking whether fflush_unlocked is declared... yes
checking for stdint.h... yes
yes
checking whether asprintf is declared... checking whether calloc is declared... yes
checking for unistd.h... yes
checking whether fgetc_unlocked is declared... yes
yes
checking whether vasprintf is declared... yes
checking for dlfcn.h... checking whether getenv is declared... yes
checking whether fgets_unlocked is declared... yes
checking for objdir... .libs
yes
yes
checking whether snprintf is declared... checking whether getopt is declared... yes
checking whether fileno_unlocked is declared... yes
checking whether vsnprintf is declared... checking if gcc supports -fno-rtti -fno-exceptions... yes
checking whether malloc is declared... yes
checking whether fprintf_unlocked is declared... no
checking for gcc option to produce PIC... -fPIC -DPIC
checking if gcc PIC flag -fPIC -DPIC works... yes
yes
checking if gcc static flag -static works... checking whether calloc is declared... yes
checking whether realloc is declared... no
checking whether fputc_unlocked is declared... yes
yes
checking whether getenv is declared... yes
checking whether sbrk is declared... checking whether fputs_unlocked is declared... yes
checking if gcc supports -c -o file.o... yes
yes
checking whether getopt is declared... checking if gcc supports -c -o file.o... (cached) yes
checking whether the gcc linker (ld -m elf_x86_64) supports shared libraries... yes
checking whether fread_unlocked is declared... yes
checking dynamic linker characteristics... yes
checking whether strtol is declared... yes
checking whether malloc is declared... yes
yes
checking whether fwrite_unlocked is declared... checking whether strtoul is declared... GNU/Linux ld.so
checking how to hardcode library paths into programs... immediate
checking whether stripping libraries is possible... yes
checking if libtool supports shared libraries... yes
checking whether to build shared libraries... no
checking whether to build static libraries... yes
checking how to run the C preprocessor... gcc -E
yes
yes
checking whether getchar_unlocked is declared... checking whether realloc is declared... yes
checking whether strtoll is declared... checking for stdlib.h... (cached) yes
checking for unistd.h... (cached) yes
checking for sys/param.h... yes
yes
yes
checking whether strtoull is declared... checking whether sbrk is declared... checking whether getc_unlocked is declared... yes
checking for getpagesize... yes
yes
yes
checking whether putchar_unlocked is declared... checking whether strtol is declared... checking whether strverscmp is declared... yes
checking for working mmap... yes
yes
yes
checking whether putc_unlocked is declared... checking whether strtoul is declared... checking whether strnlen is declared... yes
checking for working alloca.h... yes
checking whether canonicalize_file_name must be declared... yes
checking whether strtoll is declared... yes
checking for memcpy... no
checking for stdlib.h... (cached) yes
yes
checking for alloca... checking for unistd.h... (cached) yes
yes
checking for sys/param.h... (cached) yes
checking for getpagesize... (cached) yes
checking whether strtoull is declared... checking for working mmap... yes
checking for strerror... yes
checking for ANSI C header files... (cached) yes
checking for nl_langinfo and CODESET... yes
yes
checking for unistd.h... (cached) yes
checking whether strverscmp is declared... yes
checking whether NLS is requested... no
checking for uchar... configure: updating cache ./config.cache
yes
checking for working strncmp... checking that generated files are newer than configure... done
configure: creating ./config.status
yes

checking size of ino_t... checking whether strnlen is declared... yes
checking whether canonicalize_file_name must be declared... yes
configure: updating cache ./config.cache
8
checking size of dev_t... configure: creating ./config.status
no
checking for stdlib.h... (cached) yes
checking for unistd.h... (cached) yes
checking for sys/param.h... (cached) yes
checking for getpagesize... (cached) yes
checking for working mmap... 8
checking for ld used by GCC... ld
checking if the linker (ld) is GNU ld... egrep: warning: egrep is obsolescent; using grep -E
yes
checking for shared library run path origin... config.status: creating Makefile
egrep: warning: egrep is obsolescent; using grep -E
done
checking for iconv... (cached) no
config.status: creating testsuite/Makefile
config.status: creating config.h
checking for CET support... config.status: executing default commands
yes
checking for working strncmp... mkdir -p -- host-x86_64-pc-linux-gnu/libbacktrace
Configuring in host-x86_64-pc-linux-gnu/libbacktrace
yes
configure: updating cache ./config.cache
configure: creating ./config.status
configure: creating cache ./config.cache
checking build system type... x86_64-pc-linux-gnu
checking host system type... x86_64-pc-linux-gnu
checking target system type... yes
checking valgrind.h usability... x86_64-pc-elf
checking for x86_64-pc-linux-gnu-gcc... gcc
config.status: creating Makefile
config.status: creating Makefile
config.status: executing depfiles commands
config.status: creating testsuite/Makefile
checking whether the C compiler works... config.status: creating config.h
no
checking valgrind.h presence... config.status: executing default commands
no
checking for valgrind.h... no
checking for VALGRIND_DISCARD in <valgrind/memcheck.h>... yes
checking for C compiler default output file name... a.out
checking for suffix of executables... no
checking for VALGRIND_DISCARD in <memcheck.h>... mkdir -p -- host-x86_64-pc-linux-gnu/libcody
config.status: executing libtool commands
Configuring in host-x86_64-pc-linux-gnu/libcody
no

checking whether we are cross compiling... configure: updating cache ./config.cache
configure: creating ./config.status
mkdir -p -- host-x86_64-pc-linux-gnu/libdecnumber
Configuring in host-x86_64-pc-linux-gnu/libdecnumber
no
checking for suffix of object files... o
checking whether we are using the GNU C compiler... config.status: creating Makefile
configure: creating cache ./config.cache
checking build system type... config.status: creating config.h
x86_64-pc-linux-gnu
checking host system type... config.status: executing depdir commands
x86_64-pc-linux-gnu
checking maintainer-mode... 
mkdir -p -- .deps
yes
checking whether gcc accepts -g... checking whether the C++ compiler works... configure: creating cache ./config.cache
checking whether make sets $(MAKE)... yes
checking for gcc option to accept ISO C89... mkdir -p -- host-x86_64-pc-linux-gnu/fixincludes
yes
checking for x86_64-pc-linux-gnu-gcc... gcc
Configuring in host-x86_64-pc-linux-gnu/fixincludes
checking whether the C compiler works... yes
checking for C++ compiler default output file name... a.out
checking for suffix of executables... none needed
checking whether gcc understands -c and -o together... yes
checking for C compiler default output file name... a.out
checking for suffix of executables... 
checking whether we are cross compiling... yes
checking how to run the C preprocessor... 
checking whether we are cross compiling... gcc -E
configure: creating cache ./config.cache
checking build system type... x86_64-pc-linux-gnu
checking host system type... x86_64-pc-linux-gnu
checking target system type... checking for grep that handles long lines and -e... /usr/bin/grep
checking for egrep... no
/usr/bin/grep -E
checking for ANSI C header files... checking for suffix of object files... x86_64-pc-elf
checking for x86_64-pc-linux-gnu-gcc... gcc
no
checking for suffix of object files... checking whether the C compiler works... o
checking whether we are using the GNU C++ compiler... o
checking whether we are using the GNU C compiler... yes
checking whether g++ accepts -g... yes
checking whether gcc accepts -g... yes
checking for C compiler default output file name... a.out
checking for suffix of executables... yes
checking whether g++ is for C++11... yes
checking for gcc option to accept ISO C89... 
checking whether we are cross compiling... adding -std=c++11
checking adding -Wl,--no-undefined to linker... none needed
checking for x86_64-pc-linux-gnu-ranlib... ranlib
checking for x86_64-pc-linux-gnu-ar... ar
checking for aclocal... aclocal
checking for autoconf... autoconf
checking for autoheader... autoheader
checking whether gcc supports -W... yes
checking for sys/types.h... no
checking for suffix of object files... yes
checking whether gcc supports -Wall... ok
checking exceptions... no
checking for x86_64-pc-linux-gnu-ranlib... ranlib
checking for x86_64-pc-linux-gnu-ar... ar
yes
o
checking whether we are using the GNU C compiler... checking for sys/stat.h... configure: updating cache ./config.cache
yes
configure: creating ./config.status
checking whether gcc supports -Wwrite-strings... yes
checking whether gcc accepts -g... yes
yes
checking for stdlib.h... checking whether gcc supports -Wstrict-prototypes... yes
checking for gcc option to accept ISO C89... yes
checking whether gcc supports -Wmissing-prototypes... yes
checking for string.h... config.status: creating Makefile
none needed
checking how to run the C preprocessor... yes
config.status: creating config.h
checking whether gcc supports -Wold-style-definition... yes
checking for memory.h... yes
gcc -E
checking whether gcc supports -Wmissing-format-attribute... make[1]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/libiberty'
if [ x"-fpic" != x ] && [ ! -d pic ]; then \
  mkdir pic; \
else true; fi
yes
checking whether gcc supports -Wcast-qual... yes
touch stamp-picdir
if [ x"" != x ] && [ ! -d noasan ]; then \
  mkdir noasan; \
else true; fi
touch stamp-noasandir
checking for strings.h... if [ x"-fpic" != x ]; then \
  gcc -c -DHAVE_CONFIG_H -g -O2    -I. -I../.././libiberty/../include  -W -Wall -Wwrite-strings -Wc++-compat -Wstrict-prototypes -Wshadow=local -pedantic  -D_GNU_SOURCE -fcf-protection -fpic ../.././libiberty/dwarfnames.c -o pic/dwarfnames.o; \
else true; fi
checking for grep that handles long lines and -e... /usr/bin/grep
checking for egrep... /usr/bin/grep -E
checking for ANSI C header files... yes
checking whether gcc supports -pedantic -Wlong-long... yes
checking for inttypes.h... yes
checking whether gcc supports -fno-lto... yes
yes
checking how to run the C preprocessor... checking for stdint.h... gcc -E
yes
checking for unistd.h... checking for grep that handles long lines and -e... /usr/bin/grep
checking for egrep... /usr/bin/grep -E
checking for ANSI C header files... yes
yes
checking for sys/types.h... if [ x"" != x ]; then \
  gcc -c -DHAVE_CONFIG_H -g -O2    -I. -I../.././libiberty/../include  -W -Wall -Wwrite-strings -Wc++-compat -Wstrict-prototypes -Wshadow=local -pedantic  -D_GNU_SOURCE -fcf-protection -fpic  ../.././libiberty/dwarfnames.c -o noasan/dwarfnames.o; \
else true; fi
checking minix/config.h usability... gcc -c -DHAVE_CONFIG_H -g -O2    -I. -I../.././libiberty/../include  -W -Wall -Wwrite-strings -Wc++-compat -Wstrict-prototypes -Wshadow=local -pedantic  -D_GNU_SOURCE -fcf-protection ../.././libiberty/dwarfnames.c -o dwarfnames.o
yes
checking for sys/stat.h... no
checking minix/config.h presence... no
checking for minix/config.h... no
checking whether it is safe to define __EXTENSIONS__... yes
checking for stdlib.h... yes
checking for a BSD-compatible install... /usr/bin/install -c
checking whether build environment is sane... yes
yes
checking for a thread-safe mkdir -p... /usr/bin/mkdir -p
checking for gawk... gawk
checking whether make sets $(MAKE)... checking for string.h... yes
checking whether make supports nested variables... yes
yes
checking whether to enable maintainer-specific portions of Makefiles... no
checking for x86_64-pc-linux-gnu-gcc... (cached) gcc
checking for sys/types.h... if [ x"-fpic" != x ]; then \
  gcc -c -DHAVE_CONFIG_H -g -O2    -I. -I../.././libiberty/../include  -W -Wall -Wwrite-strings -Wc++-compat -Wstrict-prototypes -Wshadow=local -pedantic  -D_GNU_SOURCE -fcf-protection -fpic ../.././libiberty/dyn-string.c -o pic/dyn-string.o; \
else true; fi
yes
checking whether we are using the GNU C compiler... (cached) yes
checking whether gcc accepts -g... (cached) yes
checking for gcc option to accept ISO C89... (cached) none needed
checking whether gcc understands -c and -o together... (cached) yes
checking for memory.h... checking for x86_64-pc-linux-gnu-ranlib... ranlib
checking for gawk... (cached) gawk
checking for dwz... no
checking how to print strings... yes
printf
checking for a sed that does not truncate output... /usr/bin/sed
checking for sys/stat.h... checking for fgrep... /usr/bin/grep -F
checking for ld used by gcc... ld
checking if the linker (ld) is GNU ld... yes
checking for BSD- or MS-compatible name lister (nm)... nm
checking the name lister (nm) interface... yes
yes
checking for strings.h... checking for stdlib.h... BSD nm
checking whether ln -s works... yes
checking the maximum length of command line arguments... 1572864
checking whether the shell understands some XSI constructs... yes
checking whether the shell understands "+="... yes
checking for ld option to reload object files... -r
checking for x86_64-pc-linux-gnu-objdump... objdump
checking how to recognize dependent libraries... pass_all
checking for x86_64-pc-linux-gnu-ar... ar
checking for x86_64-pc-linux-gnu-strip... no
checking for strip... strip
yes
checking for x86_64-pc-linux-gnu-ranlib... (cached) ranlib
checking command to parse nm output from gcc object... yes
checking for string.h... checking for inttypes.h... if [ x"" != x ]; then \
  gcc -c -DHAVE_CONFIG_H -g -O2    -I. -I../.././libiberty/../include  -W -Wall -Wwrite-strings -Wc++-compat -Wstrict-prototypes -Wshadow=local -pedantic  -D_GNU_SOURCE -fcf-protection -fpic  ../.././libiberty/dyn-string.c -o noasan/dyn-string.o; \
else true; fi
gcc -c -DHAVE_CONFIG_H -g -O2    -I. -I../.././libiberty/../include  -W -Wall -Wwrite-strings -Wc++-compat -Wstrict-prototypes -Wshadow=local -pedantic  -D_GNU_SOURCE -fcf-protection ../.././libiberty/dyn-string.c -o dyn-string.o
yes
checking for memory.h... yes
checking for stdint.h... yes
checking for strings.h... yes
ok
checking for unistd.h... yes
checking for dlfcn.h... checking for inttypes.h... yes
checking minix/config.h usability... yes
checking for stdint.h... yes
checking for objdir... .libs
no
checking minix/config.h presence... if [ x"-fpic" != x ]; then \
  gcc -c -DHAVE_CONFIG_H -g -O2    -I. -I../.././libiberty/../include  -W -Wall -Wwrite-strings -Wc++-compat -Wstrict-prototypes -Wshadow=local -pedantic  -D_GNU_SOURCE -fcf-protection -fpic ../.././libiberty/fdmatch.c -o pic/fdmatch.o; \
else true; fi
no
checking for minix/config.h... no
checking whether it is safe to define __EXTENSIONS__... yes
checking for unistd.h... if [ x"" != x ]; then \
  gcc -c -DHAVE_CONFIG_H -g -O2    -I. -I../.././libiberty/../include  -W -Wall -Wwrite-strings -Wc++-compat -Wstrict-prototypes -Wshadow=local -pedantic  -D_GNU_SOURCE -fcf-protection -fpic  ../.././libiberty/fdmatch.c -o noasan/fdmatch.o; \
else true; fi
gcc -c -DHAVE_CONFIG_H -g -O2    -I. -I../.././libiberty/../include  -W -Wall -Wwrite-strings -Wc++-compat -Wstrict-prototypes -Wshadow=local -pedantic  -D_GNU_SOURCE -fcf-protection ../.././libiberty/fdmatch.c -o fdmatch.o
yes
yes
checking for a sed that does not truncate output... checking ctype.h usability... /usr/bin/sed
checking whether gcc supports -W... checking if gcc supports -fno-rtti -fno-exceptions... no
checking for gcc option to produce PIC... -fPIC -DPIC
checking if gcc PIC flag -fPIC -DPIC works... yes
checking whether gcc supports -Wall... yes
checking if gcc static flag -static works... yes
checking ctype.h presence... if [ x"-fpic" != x ]; then \
  gcc -c -DHAVE_CONFIG_H -g -O2    -I. -I../.././libiberty/../include  -W -Wall -Wwrite-strings -Wc++-compat -Wstrict-prototypes -Wshadow=local -pedantic  -D_GNU_SOURCE -fcf-protection -fpic ../.././libiberty/fibheap.c -o pic/fibheap.o; \
else true; fi
yes
checking for ctype.h... yes
yes
checking stddef.h usability... checking whether gcc supports -Wwrite-strings... yes
checking whether gcc supports -Wstrict-prototypes... yes
checking stddef.h presence... yes

...331441 bytes truncated...

The tool call succeeded but the output was truncated. Full output saved to: /home/julien/.local/share/opencode/tool-output/tool_d0643c7620015ByCTypdZsb5py
Use the Task tool to have explore agent process this file with Grep and Read (with offset/limit). Do NOT read the full file yourself - delegate to save context.
[0m
The GCC build is in progress. Let me check the build status and then install when ready:
[0m$ [0mcd tools/gcc-13.2.0 && make -j$(nproc) install-gcc
/bin/sh ./mkinstalldirs /home/julien/.local /home/julien/.local
make[1]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/lto-plugin'
make[1]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/fixincludes'
make[2]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/lto-plugin'
make[2]: Nothing to be done for 'install-data-am'.
rm -rf /home/julien/.local/libexec/gcc/x86_64-elf/13.2.0/install-tools
 /usr/bin/mkdir -p '/home/julien/.local/libexec/gcc/x86_64-elf/13.2.0'
/bin/sh ../.././fixincludes/../mkinstalldirs /home/julien/.local/libexec/gcc/x86_64-elf/13.2.0/install-tools
 /bin/sh ./libtool --tag=disable-static  --mode=install /usr/bin/install -c   liblto_plugin.la '/home/julien/.local/libexec/gcc/x86_64-elf/13.2.0'
mkdir -p -- /home/julien/.local/libexec/gcc/x86_64-elf/13.2.0/install-tools
/bin/sh ../.././fixincludes/../mkinstalldirs /home/julien/.local/lib/gcc/x86_64-elf/13.2.0/install-tools/include
mkdir -p -- /home/julien/.local/lib/gcc/x86_64-elf/13.2.0/install-tools/include
/usr/bin/install -c -m 644 ../.././fixincludes/README-fixinc \
  /home/julien/.local/lib/gcc/x86_64-elf/13.2.0/install-tools/include/README
/usr/bin/install -c fixinc.sh /home/julien/.local/libexec/gcc/x86_64-elf/13.2.0/install-tools/fixinc.sh
/usr/bin/install -c fixincl /home/julien/.local/libexec/gcc/x86_64-elf/13.2.0/install-tools/fixincl
/usr/bin/install -c mkheaders /home/julien/.local/libexec/gcc/x86_64-elf/13.2.0/install-tools/mkheaders
make[1]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/fixincludes'
libtool: install: /usr/bin/install -c .libs/liblto_plugin.so /home/julien/.local/libexec/gcc/x86_64-elf/13.2.0/liblto_plugin.so
libtool: install: /usr/bin/install -c .libs/liblto_plugin.lai /home/julien/.local/libexec/gcc/x86_64-elf/13.2.0/liblto_plugin.la
libtool: finish: PATH="/home/julien/Desktop/Free-Wiggum-opencode/venv/bin:/home/julien/Desktop/Free-Wiggum-opencode/venv/bin:/home/julien/.vscode-server/data/User/globalStorage/github.copilot-chat/debugCommand:/home/julien/.vscode-server/data/User/globalStorage/github.copilot-chat/copilotCli:/home/julien/.vscode-server/cli/servers/Stable-ce099c1ed25d9eb3076c11e4a280f3eb52b4fbeb/server/bin/remote-cli:/home/julien/.local/bin:/home/julien/.nvm/versions/node/v22.21.1/bin:/usr/local/sbin:/usr/local/bin:/usr/bin:/usr/bin/site_perl:/usr/bin/vendor_perl:/usr/bin/core_perl:/sbin" ldconfig -n /home/julien/.local/libexec/gcc/x86_64-elf/13.2.0
----------------------------------------------------------------------
Libraries have been installed in:
   /home/julien/.local/libexec/gcc/x86_64-elf/13.2.0

If you ever happen to want to link against installed libraries
in a given directory, LIBDIR, you must either use libtool, and
specify the full pathname of the library, or use the `-LLIBDIR'
flag during linking and do at least one of the following:
   - add LIBDIR to the `LD_LIBRARY_PATH' environment variable
     during execution
   - add LIBDIR to the `LD_RUN_PATH' environment variable
     during linking
   - use the `-Wl,-rpath -Wl,LIBDIR' linker flag
   - have your system administrator add LIBDIR to `/etc/ld.so.conf'

See any operating system documentation about shared libraries for
more information, such as the ld(1) and ld.so(8) manual pages.
----------------------------------------------------------------------
make[2]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/lto-plugin'
make[1]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/lto-plugin'
make[1]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/gcc'
/bin/sh ../.././gcc/../mkinstalldirs /home/julien/.local/lib/gcc/x86_64-elf/13.2.0
/bin/sh ../.././gcc/../mkinstalldirs /home/julien/.local/libexec/gcc/x86_64-elf/13.2.0
/bin/sh ../.././gcc/../mkinstalldirs /home/julien/.local/bin
/bin/sh ../.././gcc/../mkinstalldirs /home/julien/.local/include
/bin/sh ../.././gcc/../mkinstalldirs /home/julien/.local/share/info
/bin/sh ../.././gcc/../mkinstalldirs /home/julien/.local/share/man/man1
/bin/sh ../.././gcc/../mkinstalldirs /home/julien/.local/share/man/man7
mkdir -p -- /home/julien/.local/share/man/man7
rm -f tmp-header-vars
echo USER_H=float.h iso646.h stdarg.h stdbool.h stddef.h varargs.h stdfix.h stdnoreturn.h stdalign.h stdatomic.h config/i386/cpuid.h mmintrin.h mm3dnow.h xmmintrin.h emmintrin.h pmmintrin.h tmmintrin.h ammintrin.h smmintrin.h nmmintrin.h bmmintrin.h fma4intrin.h wmmintrin.h immintrin.h x86intrin.h avxintrin.h xopintrin.h ia32intrin.h cross-stdarg.h lwpintrin.h popcntintrin.h lzcntintrin.h bmiintrin.h bmi2intrin.h tbmintrin.h avx2intrin.h avx512fintrin.h fmaintrin.h f16cintrin.h rtmintrin.h xtestintrin.h rdseedintrin.h prfchwintrin.h adxintrin.h fxsrintrin.h xsaveintrin.h xsaveoptintrin.h avx512cdintrin.h avx512erintrin.h avx512pfintrin.h shaintrin.h clflushoptintrin.h xsavecintrin.h xsavesintrin.h avx512dqintrin.h avx512bwintrin.h avx512vlintrin.h avx512vlbwintrin.h avx512vldqintrin.h avx512ifmaintrin.h avx512ifmavlintrin.h avx512vbmiintrin.h avx512vbmivlintrin.h avx5124fmapsintrin.h avx5124vnniwintrin.h avx512vpopcntdqintrin.h clwbintrin.h mwaitxintrin.h clzerointrin.h pkuintrin.h sgxintrin.h cetintrin.h gfniintrin.h cet.h avx512vbmi2intrin.h avx512vbmi2vlintrin.h avx512vnniintrin.h avx512vnnivlintrin.h vaesintrin.h vpclmulqdqintrin.h avx512vpopcntdqvlintrin.h avx512bitalgintrin.h pconfigintrin.h wbnoinvdintrin.h movdirintrin.h waitpkgintrin.h cldemoteintrin.h avx512bf16vlintrin.h avx512bf16intrin.h enqcmdintrin.h serializeintrin.h avx512vp2intersectintrin.h avx512vp2intersectvlintrin.h tsxldtrkintrin.h amxtileintrin.h amxint8intrin.h amxbf16intrin.h x86gprintrin.h uintrintrin.h hresetintrin.h keylockerintrin.h avxvnniintrin.h mwaitintrin.h avx512fp16intrin.h avx512fp16vlintrin.h avxifmaintrin.h avxvnniint8intrin.h avxneconvertintrin.h cmpccxaddintrin.h amxfp16intrin.h prfchiintrin.h raointintrin.h amxcomplexintrin.h tgmath.h mm_malloc.h >> tmp-header-vars; echo T_GLIMITS_H=glimits.h >> tmp-header-vars; echo T_STDINT_GCC_H=stdint-gcc.h >> tmp-header-vars; echo HASHTAB_H=hashtab.h >> tmp-header-vars; echo OBSTACK_H=obstack.h >> tmp-header-vars; echo SPLAY_TREE_H=splay-tree.h >> tmp-header-vars; echo MD5_H=md5.h >> tmp-header-vars; echo XREGEX_H=xregex.h >> tmp-header-vars; echo FNMATCH_H=fnmatch.h >> tmp-header-vars; echo LINKER_PLUGIN_API_H=plugin-api.h >> tmp-header-vars; echo BCONFIG_H=bconfig.h auto-host.h ansidecl.h >> tmp-header-vars; echo CONFIG_H=config.h auto-host.h ansidecl.h >> tmp-header-vars; echo TCONFIG_H=tconfig.h auto-host.h ansidecl.h >> tmp-header-vars; echo TM_P_H=tm_p.h config/i386/i386-protos.h tm-preds.h >> tmp-header-vars; echo TM_D_H=tm_d.h config/i386/i386-d.h >> tmp-header-vars; echo GTM_H=tm.h options.h config/vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h >> tmp-header-vars; echo TM_H=tm.h options.h config/vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def common/config/i386/i386-cpuinfo.h i386-isa.def >> tmp-header-vars; echo DUMPFILE_H=line-map.h dumpfile.h >> tmp-header-vars; echo VEC_H=vec.h statistics.h ggc.h gtype-desc.h statistics.h >> tmp-header-vars; echo HASH_TABLE_H=hashtab.h hash-table.h ggc.h gtype-desc.h statistics.h >> tmp-header-vars; echo EXCEPT_H=except.h hashtab.h >> tmp-header-vars; echo TARGET_H=tm.h options.h config/vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def common/config/i386/i386-cpuinfo.h i386-isa.def target.h target.def target-hooks-macros.h target-insns.def insn-modes.h insn-codes.h >> tmp-header-vars; echo C_TARGET_H=c-family/c-target.h c-family/c-target.def target-hooks-macros.h >> tmp-header-vars; echo COMMON_TARGET_H=common/common-target.h line-map.h input.h common/common-target.def target-hooks-macros.h >> tmp-header-vars; echo D_TARGET_H=d/d-target.h d/d-target.def target-hooks-macros.h >> tmp-header-vars; echo MACHMODE_H=machmode.h mode-classes.def >> tmp-header-vars; echo HOOKS_H=hooks.h >> tmp-header-vars; echo HOSTHOOKS_DEF_H=hosthooks-def.h hooks.h >> tmp-header-vars; echo LANGHOOKS_DEF_H=langhooks-def.h hooks.h >> tmp-header-vars; echo TARGET_DEF_H=target-def.h target-hooks-def.h hooks.h targhooks.h >> tmp-header-vars; echo C_TARGET_DEF_H=c-family/c-target-def.h c-family/c-target-hooks-def.h tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h config/i386/i386-opts.h stringop.def real.h fixed-value.h tree-check.h c-family/c-common.h c-family/c-common.def tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h i386-opts.h stringop.def real.h fixed-value.h tree-check.h splay-tree.h line-map.h cpplib.h ggc.h gtype-desc.h statistics.h diagnostic-core.h line-map.h input.h bversion.h diagnostic.def hooks.h common/common-targhooks.h >> tmp-header-vars; echo CORETYPES_H=coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h >> tmp-header-vars; echo RTL_BASE_H=coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h rtl.h rtl.def reg-notes.def insn-notes.def line-map.h input.h real.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h fixed-value.h alias.h hashtab.h >> tmp-header-vars; echo FIXED_VALUE_H=fixed-value.h >> tmp-header-vars; echo RTL_H=coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h rtl.h rtl.def reg-notes.def insn-notes.def line-map.h input.h real.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h fixed-value.h alias.h hashtab.h flags.h flag-types.h options.h flag-types.h config/i386/i386-opts.h stringop.def genrtl.h >> tmp-header-vars; echo READ_MD_H=obstack.h hashtab.h read-md.h >> tmp-header-vars; echo INTERNAL_FN_H=internal-fn.h internal-fn.def >> tmp-header-vars; echo TREE_CORE_H=tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h config/i386/i386-opts.h stringop.def real.h fixed-value.h >> tmp-header-vars; echo TREE_H=tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h config/i386/i386-opts.h stringop.def real.h fixed-value.h tree-check.h >> tmp-header-vars; echo REGSET_H=regset.h bitmap.h hashtab.h statistics.h hard-reg-set.h >> tmp-header-vars; echo BASIC_BLOCK_H=basic-block.h predict.h predict.def vec.h statistics.h ggc.h gtype-desc.h statistics.h function.h hashtab.h tm.h options.h config/vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def common/config/i386/i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h cfg-flags.def cfghooks.h profile-count.h >> tmp-header-vars; echo GIMPLE_H=gimple.h gimple.def gsstruct.def vec.h statistics.h ggc.h gtype-desc.h statistics.h ggc.h gtype-desc.h statistics.h basic-block.h predict.h predict.def vec.h statistics.h ggc.h gtype-desc.h statistics.h function.h hashtab.h tm.h options.h config/vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def common/config/i386/i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h cfg-flags.def cfghooks.h profile-count.h tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h i386-opts.h stringop.def real.h fixed-value.h tree-check.h tree-ssa-operands.h tree-ssa-alias.h internal-fn.h internal-fn.def hashtab.h hash-table.h ggc.h gtype-desc.h statistics.h is-a.h >> tmp-header-vars; echo GCOV_IO_H=gcov-io.h version.h auto-host.h gcov-counter.def >> tmp-header-vars; echo RECOG_H=recog.h >> tmp-header-vars; echo EMIT_RTL_H=emit-rtl.h >> tmp-header-vars; echo FLAGS_H=flags.h flag-types.h options.h flag-types.h config/i386/i386-opts.h stringop.def >> tmp-header-vars; echo OPTIONS_H=options.h flag-types.h config/i386/i386-opts.h stringop.def >> tmp-header-vars; echo FUNCTION_H=function.h hashtab.h tm.h options.h config/vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def common/config/i386/i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h >> tmp-header-vars; echo EXPR_H=expr.h insn-config.h function.h hashtab.h tm.h options.h config/vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def common/config/i386/i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h rtl.h rtl.def reg-notes.def insn-notes.def line-map.h input.h real.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h fixed-value.h alias.h hashtab.h flags.h flag-types.h options.h flag-types.h i386-opts.h stringop.def genrtl.h flags.h flag-types.h options.h flag-types.h i386-opts.h stringop.def tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h i386-opts.h stringop.def real.h fixed-value.h tree-check.h emit-rtl.h >> tmp-header-vars; echo OPTABS_H=optabs.h insn-codes.h insn-opinit.h >> tmp-header-vars; echo REGS_H=regs.h hard-reg-set.h >> tmp-header-vars; echo CFGLOOP_H=cfgloop.h basic-block.h predict.h predict.def vec.h statistics.h ggc.h gtype-desc.h statistics.h function.h hashtab.h tm.h options.h config/vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def common/config/i386/i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h cfg-flags.def cfghooks.h profile-count.h bitmap.h hashtab.h statistics.h sbitmap.h >> tmp-header-vars; echo IPA_UTILS_H=ipa-utils.h tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h config/i386/i386-opts.h stringop.def real.h fixed-value.h tree-check.h cgraph.h vec.h statistics.h ggc.h gtype-desc.h statistics.h tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h i386-opts.h stringop.def real.h fixed-value.h tree-check.h basic-block.h predict.h predict.def vec.h statistics.h ggc.h gtype-desc.h statistics.h function.h hashtab.h tm.h options.h vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def common/config/i386/i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h cfg-flags.def cfghooks.h profile-count.h function.h hashtab.h tm.h options.h vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h cif-code.def ipa-ref.h plugin-api.h is-a.h >> tmp-header-vars; echo IPA_REFERENCE_H=ipa-reference.h bitmap.h hashtab.h statistics.h tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h config/i386/i386-opts.h stringop.def real.h fixed-value.h tree-check.h >> tmp-header-vars; echo CGRAPH_H=cgraph.h vec.h statistics.h ggc.h gtype-desc.h statistics.h tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h config/i386/i386-opts.h stringop.def real.h fixed-value.h tree-check.h basic-block.h predict.h predict.def vec.h statistics.h ggc.h gtype-desc.h statistics.h function.h hashtab.h tm.h options.h vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def common/config/i386/i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h cfg-flags.def cfghooks.h profile-count.h function.h hashtab.h tm.h options.h vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h cif-code.def ipa-ref.h plugin-api.h is-a.h >> tmp-header-vars; echo DF_H=df.h bitmap.h hashtab.h statistics.h regset.h bitmap.h hashtab.h statistics.h hard-reg-set.h sbitmap.h basic-block.h predict.h predict.def vec.h statistics.h ggc.h gtype-desc.h statistics.h function.h hashtab.h tm.h options.h config/vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def common/config/i386/i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h cfg-flags.def cfghooks.h profile-count.h alloc-pool.h timevar.h timevar.def >> tmp-header-vars; echo RESOURCE_H=resource.h hard-reg-set.h df.h bitmap.h hashtab.h statistics.h regset.h bitmap.h hashtab.h statistics.h hard-reg-set.h sbitmap.h basic-block.h predict.h predict.def vec.h statistics.h ggc.h gtype-desc.h statistics.h function.h hashtab.h tm.h options.h config/vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def common/config/i386/i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h cfg-flags.def cfghooks.h profile-count.h alloc-pool.h timevar.h timevar.def >> tmp-header-vars; echo GCC_H=gcc.h version.h diagnostic-core.h line-map.h input.h bversion.h diagnostic.def >> tmp-header-vars; echo GGC_H=ggc.h gtype-desc.h statistics.h >> tmp-header-vars; echo TIMEVAR_H=timevar.h timevar.def >> tmp-header-vars; echo INSN_ATTR_H=insn-attr.h insn-attr-common.h insn-addr.h >> tmp-header-vars; echo INSN_ADDR_H=insn-addr.h >> tmp-header-vars; echo C_COMMON_H=c-family/c-common.h c-family/c-common.def tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h config/i386/i386-opts.h stringop.def real.h fixed-value.h tree-check.h splay-tree.h line-map.h cpplib.h ggc.h gtype-desc.h statistics.h diagnostic-core.h line-map.h input.h bversion.h diagnostic.def >> tmp-header-vars; echo C_PRAGMA_H=c-family/c-pragma.h line-map.h cpplib.h >> tmp-header-vars; echo C_TREE_H=c/c-tree.h c-family/c-common.h c-family/c-common.def tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h config/i386/i386-opts.h stringop.def real.h fixed-value.h tree-check.h splay-tree.h line-map.h cpplib.h ggc.h gtype-desc.h statistics.h diagnostic-core.h line-map.h input.h bversion.h diagnostic.def diagnostic.h diagnostic-core.h line-map.h input.h bversion.h diagnostic.def pretty-print.h line-map.h input.h obstack.h wide-int-print.h >> tmp-header-vars; echo SYSTEM_H=system.h hwint.h libiberty.h safe-ctype.h filenames.h hashtab.h >> tmp-header-vars; echo PREDICT_H=predict.h predict.def >> tmp-header-vars; echo CPPLIB_H=line-map.h cpplib.h >> tmp-header-vars; echo CODYLIB_H=cody.hh >> tmp-header-vars; echo INPUT_H=line-map.h input.h >> tmp-header-vars; echo OPTS_H=line-map.h input.h vec.h statistics.h ggc.h gtype-desc.h statistics.h opts.h obstack.h >> tmp-header-vars; echo SYMTAB_H=symtab.h obstack.h >> tmp-header-vars; echo CPP_INTERNAL_H=internal.h >> tmp-header-vars; echo TREE_DUMP_H=tree-dump.h splay-tree.h line-map.h dumpfile.h >> tmp-header-vars; echo TREE_PASS_H=tree-pass.h timevar.h timevar.def line-map.h dumpfile.h >> tmp-header-vars; echo TREE_SSA_H=tree-ssa.h tree-ssa-operands.h bitmap.h hashtab.h statistics.h sbitmap.h basic-block.h predict.h predict.def vec.h statistics.h ggc.h gtype-desc.h statistics.h function.h hashtab.h tm.h options.h config/vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def common/config/i386/i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h cfg-flags.def cfghooks.h profile-count.h gimple.h gimple.def gsstruct.def vec.h statistics.h ggc.h gtype-desc.h statistics.h ggc.h gtype-desc.h statistics.h basic-block.h predict.h predict.def vec.h statistics.h ggc.h gtype-desc.h statistics.h function.h hashtab.h tm.h options.h vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h cfg-flags.def cfghooks.h profile-count.h tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h i386-opts.h stringop.def real.h fixed-value.h tree-check.h tree-ssa-operands.h tree-ssa-alias.h internal-fn.h internal-fn.def hashtab.h hash-table.h ggc.h gtype-desc.h statistics.h is-a.h hashtab.h cgraph.h vec.h statistics.h ggc.h gtype-desc.h statistics.h tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h i386-opts.h stringop.def real.h fixed-value.h tree-check.h basic-block.h predict.h predict.def vec.h statistics.h ggc.h gtype-desc.h statistics.h function.h hashtab.h tm.h options.h vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h cfg-flags.def cfghooks.h profile-count.h function.h hashtab.h tm.h options.h vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h cif-code.def ipa-ref.h plugin-api.h is-a.h ipa-reference.h bitmap.h hashtab.h statistics.h tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h i386-opts.h stringop.def real.h fixed-value.h tree-check.h tree-ssa-alias.h >> tmp-header-vars; echo PRETTY_PRINT_H=pretty-print.h line-map.h input.h obstack.h wide-int-print.h >> tmp-header-vars; echo TREE_PRETTY_PRINT_H=tree-pretty-print.h pretty-print.h line-map.h input.h obstack.h wide-int-print.h >> tmp-header-vars; echo GIMPLE_PRETTY_PRINT_H=gimple-pretty-print.h tree-pretty-print.h pretty-print.h line-map.h input.h obstack.h wide-int-print.h >> tmp-header-vars; echo DIAGNOSTIC_CORE_H=diagnostic-core.h line-map.h input.h bversion.h diagnostic.def >> tmp-header-vars; echo DIAGNOSTIC_H=diagnostic.h diagnostic-core.h line-map.h input.h bversion.h diagnostic.def pretty-print.h line-map.h input.h obstack.h wide-int-print.h >> tmp-header-vars; echo C_PRETTY_PRINT_H=c-family/c-pretty-print.h pretty-print.h line-map.h input.h obstack.h wide-int-print.h c-family/c-common.h c-family/c-common.def tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h config/i386/i386-opts.h stringop.def real.h fixed-value.h tree-check.h splay-tree.h line-map.h cpplib.h ggc.h gtype-desc.h statistics.h diagnostic-core.h line-map.h input.h bversion.h diagnostic.def tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h i386-opts.h stringop.def real.h fixed-value.h tree-check.h >> tmp-header-vars; echo TREE_INLINE_H=tree-inline.h >> tmp-header-vars; echo REAL_H=real.h >> tmp-header-vars; echo LTO_STREAMER_H=lto-streamer.h plugin-api.h tm.h options.h config/vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def common/config/i386/i386-cpuinfo.h i386-isa.def target.h target.def target-hooks-macros.h target-insns.def insn-modes.h insn-codes.h cgraph.h vec.h statistics.h ggc.h gtype-desc.h statistics.h tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h i386-opts.h stringop.def real.h fixed-value.h tree-check.h basic-block.h predict.h predict.def vec.h statistics.h ggc.h gtype-desc.h statistics.h function.h hashtab.h tm.h options.h vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h cfg-flags.def cfghooks.h profile-count.h function.h hashtab.h tm.h options.h vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h cif-code.def ipa-ref.h plugin-api.h is-a.h vec.h statistics.h ggc.h gtype-desc.h statistics.h hashtab.h hash-table.h ggc.h gtype-desc.h statistics.h tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h i386-opts.h stringop.def real.h fixed-value.h tree-check.h gimple.h gimple.def gsstruct.def vec.h statistics.h ggc.h gtype-desc.h statistics.h ggc.h gtype-desc.h statistics.h basic-block.h predict.h predict.def vec.h statistics.h ggc.h gtype-desc.h statistics.h function.h hashtab.h tm.h options.h vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h cfg-flags.def cfghooks.h profile-count.h tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h i386-opts.h stringop.def real.h fixed-value.h tree-check.h tree-ssa-operands.h tree-ssa-alias.h internal-fn.h internal-fn.def hashtab.h hash-table.h ggc.h gtype-desc.h statistics.h is-a.h gcov-io.h version.h auto-host.h gcov-counter.def diagnostic.h diagnostic-core.h line-map.h input.h bversion.h diagnostic.def pretty-print.h line-map.h input.h obstack.h wide-int-print.h alloc-pool.h >> tmp-header-vars; echo IPA_PROP_H=ipa-prop.h tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h config/i386/i386-opts.h stringop.def real.h fixed-value.h tree-check.h vec.h statistics.h ggc.h gtype-desc.h statistics.h cgraph.h vec.h statistics.h ggc.h gtype-desc.h statistics.h tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h i386-opts.h stringop.def real.h fixed-value.h tree-check.h basic-block.h predict.h predict.def vec.h statistics.h ggc.h gtype-desc.h statistics.h function.h hashtab.h tm.h options.h vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def common/config/i386/i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h cfg-flags.def cfghooks.h profile-count.h function.h hashtab.h tm.h options.h vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h cif-code.def ipa-ref.h plugin-api.h is-a.h gimple.h gimple.def gsstruct.def vec.h statistics.h ggc.h gtype-desc.h statistics.h ggc.h gtype-desc.h statistics.h basic-block.h predict.h predict.def vec.h statistics.h ggc.h gtype-desc.h statistics.h function.h hashtab.h tm.h options.h vxworks-dummy.h biarch64.h i386.h unix.h att.h elfos.h newlib-stdint.h i386elf.h x86-64.h initfini-array.h defaults.h insn-constants.h insn-flags.h options.h flag-types.h i386-opts.h stringop.def x86-tune.def i386-cpuinfo.h i386-isa.def hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h line-map.h input.h cfg-flags.def cfghooks.h profile-count.h tree.h tree-core.h coretypes.h insn-modes.h signop.h wide-int.h wide-int-print.h insn-modes-inline.h machmode.h mode-classes.def double-int.h align.h poly-int.h poly-int-types.h all-tree.def tree.def c-family/c-common.def ada-tree.def cp-tree.def d-tree.def m2-tree.def objc-tree.def builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def hashtab.h alias.h symtab.h obstack.h flags.h flag-types.h options.h flag-types.h i386-opts.h stringop.def real.h fixed-value.h tree-check.h tree-ssa-operands.h tree-ssa-alias.h internal-fn.h internal-fn.def hashtab.h hash-table.h ggc.h gtype-desc.h statistics.h is-a.h alloc-pool.h >> tmp-header-vars; echo BITMAP_H=bitmap.h hashtab.h statistics.h >> tmp-header-vars; echo GCC_PLUGIN_H=gcc-plugin.h highlev-plugin-common.h plugin.def config.h auto-host.h ansidecl.h system.h hwint.h libiberty.h safe-ctype.h filenames.h hashtab.h hashtab.h >> tmp-header-vars; echo PLUGIN_H=plugin.h gcc-plugin.h highlev-plugin-common.h plugin.def config.h auto-host.h ansidecl.h system.h hwint.h libiberty.h safe-ctype.h filenames.h hashtab.h hashtab.h >> tmp-header-vars; echo PLUGIN_VERSION_H=plugin-version.h configargs.h >> tmp-header-vars; echo CONTEXT_H=context.h >> tmp-header-vars; echo GENSUPPORT_H=gensupport.h read-md.h optabs.def >> tmp-header-vars; echo RTL_SSA_H=pretty-print.h line-map.h input.h obstack.h wide-int-print.h insn-config.h splay-tree-utils.h recog.h regs.h hard-reg-set.h function-abi.h obstack-utils.h mux-utils.h rtlanal.h memmodel.h emit-rtl.h rtl-ssa/accesses.h rtl-ssa/insns.h rtl-ssa/blocks.h rtl-ssa/changes.h rtl-ssa/functions.h rtl-ssa/is-a.inl rtl-ssa/access-utils.h rtl-ssa/insn-utils.h rtl-ssa/movement.h rtl-ssa/change-utils.h rtl-ssa/member-fns.inl >> tmp-header-vars; echo GTFILES_H=gt-coverage.h gt-symtab-thunks.h gt-caller-save.h gt-symtab.h gt-alias.h gt-bitmap.h gt-cselib.h gt-cgraph.h gt-ipa-prop.h gt-ipa-cp.h gt-ipa-sra.h gt-ipa-modref.h gt-diagnostic-spec.h gt-dwarf2asm.h gt-dwarf2cfi.h gt-dwarf2ctf.h gt-dwarf2out.h gt-ctfout.h gt-btfout.h gt-tree-vect-generic.h gt-gimple-isel.h gt-dojump.h gt-emit-rtl.h gt-explow.h gt-expr.h gt-function.h gt-except.h gt-ggc-tests.h gt-gcse.h gt-godump.h gt-lists.h gt-optabs-libfuncs.h gt-profile.h gt-mcf.h gt-reg-stack.h gt-cfgrtl.h gt-stor-layout.h gt-stringpool.h gt-tree.h gt-varasm.h gt-tree-ssanames.h gt-tree-eh.h gt-tree-ssa-address.h gt-tree-cfg.h gt-tree-ssa-loop-ivopts.h gt-tree-dfa.h gt-tree-iterator.h gt-gimple-expr.h gt-tree-scalar-evolution.h gt-tree-profile.h gt-tree-nested.h gt-omp-general.h gt-omp-low.h gt-targhooks.h gt-i386.h gt-passes.h gt-cgraphclones.h gt-tree-phinodes.h gt-trans-mem.h gt-vtable-verify.h gt-asan.h gt-ubsan.h gt-tsan.h gt-sanopt.h gt-sancov.h gt-ipa-devirt.h gt-calls.h gt-analyzer-analyzer-language.h gt-i386-builtins.h gt-i386-expand.h gt-i386-options.h gt-ada-decl.h gt-ada-trans.h gt-ada-utils.h gt-ada-misc.h gt-c-c-lang.h gt-c-c-decl.h gt-c-family-c-common.h gt-c-family-c-cppbuiltin.h gt-c-family-c-pragma.h gt-c-family-c-format.h gt-c-c-objc-common.h gt-c-c-parser.h gt-c-family-c-common.h gt-c-family-c-format.h gt-c-family-c-cppbuiltin.h gt-c-family-c-pragma.h gt-cp-call.h gt-cp-class.h gt-cp-constexpr.h gt-cp-contracts.h gt-cp-constraint.h gt-cp-coroutines.h gt-cp-cp-gimplify.h gt-cp-cp-lang.h gt-cp-cp-objcp-common.h gt-cp-decl.h gt-cp-decl2.h gt-cp-except.h gt-cp-friend.h gt-cp-init.h gt-cp-lambda.h gt-cp-lex.h gt-cp-logic.h gt-cp-mangle.h gt-cp-method.h gt-cp-module.h gt-cp-name-lookup.h gt-cp-parser.h gt-cp-pt.h gt-cp-rtti.h gt-cp-semantics.h gt-cp-tree.h gt-cp-typeck2.h gt-cp-vtable-class-hierarchy.h gt-d-d-builtins.h gt-d-d-lang.h gt-d-typeinfo.h gt-fortran-f95-lang.h gt-fortran-trans-decl.h gt-fortran-trans-intrinsic.h gt-fortran-trans-io.h gt-fortran-trans-stmt.h gt-fortran-trans-types.h gt-go-go-lang.h gt-jit-dummy-frontend.h gt-lto-lto-lang.h gt-lto-lto.h gt-lto-lto-common.h gt-lto-lto-dump.h gt-m2-gm2-lang.h gt-m2-rtegraph.h gt-m2-m2block.h gt-m2-m2builtins.h gt-m2-m2decl.h gt-m2-m2except.h gt-m2-m2expr.h gt-m2-m2statement.h gt-m2-m2type.h gt-objc-objc-act.h gt-objc-objc-runtime-shared-support.h gt-objc-objc-gnu-runtime-abi-01.h gt-objc-objc-next-runtime-abi-01.h gt-objc-objc-next-runtime-abi-02.h gt-c-c-parser.h gt-c-c-decl.h gt-c-c-objc-common.h gt-c-family-c-common.h gt-c-family-c-cppbuiltin.h gt-c-family-c-pragma.h gt-c-family-c-format.h gt-c-family-c-common.h gt-c-family-c-format.h gt-c-family-c-cppbuiltin.h gt-c-family-c-pragma.h gt-cp-call.h gt-cp-class.h gt-cp-constexpr.h gt-cp-contracts.h gt-cp-constraint.h gt-cp-coroutines.h gt-cp-cp-gimplify.h gt-objcp-objcp-lang.h gt-cp-cp-objcp-common.h gt-cp-decl.h gt-cp-decl2.h gt-cp-except.h gt-cp-friend.h gt-cp-init.h gt-cp-lambda.h gt-cp-lex.h gt-cp-logic.h gt-cp-mangle.h gt-cp-method.h gt-cp-module.h gt-cp-name-lookup.h gt-cp-parser.h gt-cp-pt.h gt-cp-rtti.h gt-cp-semantics.h gt-cp-tree.h gt-cp-typeck2.h gt-cp-vtable-class-hierarchy.h gt-objc-objc-act.h gt-objc-objc-gnu-runtime-abi-01.h gt-objc-objc-next-runtime-abi-01.h gt-objc-objc-next-runtime-abi-02.h gt-objc-objc-runtime-shared-support.h gt-rust-rust-lang.h >> tmp-header-vars; echo GTFILES_LANG_H=gtype-ada.h gtype-c.h gtype-cp.h gtype-d.h gtype-fortran.h gtype-go.h gtype-jit.h gtype-lto.h gtype-m2.h gtype-objc.h gtype-objcp.h gtype-rust.h >> tmp-header-vars;
/bin/sh ../.././gcc/../move-if-change tmp-header-vars b-header-vars
/usr/bin/install -c lto-dump \
/home/julien/.local/bin/x86_64-elf-lto-dump
/bin/sh ../.././gcc/../mkinstalldirs /home/julien/.local/lib/gcc/x86_64-elf/13.2.0/include
/bin/sh ../.././gcc/../mkinstalldirs /home/julien/.local/lib/gcc/x86_64-elf/13.2.0/install-tools/include
install: cannot stat 'lto-dump': No such file or directory
make[1]: *** [../.././gcc/lto/Make-lang.in:57: lto.install-common] Error 1
make[1]: *** Waiting for unfinished jobs....
/bin/sh ../.././gcc/../mkinstalldirs /home/julien/.local/libexec/gcc/x86_64-elf/13.2.0/install-tools
echo timestamp > s-header-vars
mkdir -p -- /home/julien/.local/lib/gcc/x86_64-elf/13.2.0/include
rm -rf /home/julien/.local/lib/gcc/x86_64-elf/13.2.0/include-fixed
mkdir /home/julien/.local/lib/gcc/x86_64-elf/13.2.0/include-fixed
chmod a+rx /home/julien/.local/lib/gcc/x86_64-elf/13.2.0/include-fixed
make[1]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/gcc'
make: *** [Makefile:4684: install-gcc] Error 2
[0m
The install failed on lto-dump. Let me check if the core compiler was actually installed and then install the missing LTO component:
[0m$ [0mls ~/.local/bin/x86_64-elf-gcc 2>/dev/null || echo "gcc not installed"
gcc not installed
[0m
[0m$ [0mcd tools/gcc-13.2.0 && make -j$(nproc) all-gcc && make install-gcc
make[1]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/build-x86_64-pc-linux-gnu/libiberty'
make[1]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/libiberty'
make[1]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/intl'
make[1]: Nothing to be done for 'all'.
make[1]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/intl'
make[2]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/build-x86_64-pc-linux-gnu/libiberty/testsuite'
make[2]: Nothing to be done for 'all'.
make[2]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/build-x86_64-pc-linux-gnu/libiberty/testsuite'
make[1]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/zlib'
true "AR_FLAGS=rc" "CC_FOR_BUILD=gcc" "CFLAGS=-g -O2  " "CXXFLAGS=-g -O2  " "CFLAGS_FOR_BUILD=-g -O2" "CFLAGS_FOR_TARGET=-g -O2" "INSTALL=/usr/bin/install -c" "INSTALL_DATA=/usr/bin/install -c -m 644" "INSTALL_PROGRAM=/usr/bin/install -c" "INSTALL_SCRIPT=/usr/bin/install -c" "LDFLAGS=-static-libstdc++ -static-libgcc " "LIBCFLAGS=-g -O2  " "LIBCFLAGS_FOR_TARGET=-g -O2" "MAKE=make" "MAKEINFO=makeinfo --split-size=5000000 " "PICFLAG=" "PICFLAG_FOR_TARGET=" "SHELL=/bin/sh" "EXPECT=expect" "RUNTEST=runtest" "RUNTESTFLAGS=" "exec_prefix=/home/julien/.local" "infodir=/home/julien/.local/share/info" "libdir=/home/julien/.local/lib" "prefix=/home/julien/.local" "tooldir=/home/julien/.local/x86_64-elf" "AR=ar" "AS=as" "CC=gcc" "CXX=g++" "LD=ld" "LIBCFLAGS=-g -O2  " "NM=nm" "PICFLAG=" "RANLIB=ranlib" "DESTDIR=" DO=all multi-do # make
make[1]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/build-x86_64-pc-linux-gnu/libiberty'
make[2]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/libiberty/testsuite'
make[2]: Nothing to be done for 'all'.
make[2]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/libiberty/testsuite'
make[1]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/zlib'
make[1]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/libiberty'
make[1]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/libbacktrace'
make  all-am
make[2]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/libbacktrace'
make[1]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/libdecnumber'
make[1]: Nothing to be done for 'all'.
make[1]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/libdecnumber'
make[1]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/lto-plugin'
true  DO=all multi-do # make
make[2]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/libbacktrace'
make[1]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/libbacktrace'
make[1]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/libcody'
make[1]: Nothing to be done for 'all'.
make[1]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/libcody'
make  all-am
make[2]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/lto-plugin'
make[2]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/lto-plugin'
make[1]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/lto-plugin'
make[1]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/build-x86_64-pc-linux-gnu/libcpp'
test -f config.h || (rm -f stamp-h1 && make stamp-h1)
make[1]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/build-x86_64-pc-linux-gnu/libcpp'
make[1]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/build-x86_64-pc-linux-gnu/fixincludes'
make[1]: Nothing to be done for 'all'.
make[1]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/build-x86_64-pc-linux-gnu/fixincludes'
make[1]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/libcpp'
test -f config.h || (rm -f stamp-h1 && make stamp-h1)
make[1]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/fixincludes'
make[1]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/libcpp'
make[1]: Nothing to be done for 'all'.
make[1]: Leaving directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/fixincludes'
make[1]: Entering directory '/home/julien/Desktop/Free-Wiggum-opencode/projects/wiggumos/tools/gcc-13.2.0/host-x86_64-pc-linux-gnu/gcc'
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o insn-recog.o -MT insn-recog.o -MMD -MP -MF ./.deps/insn-recog.TPo insn-recog.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o cfgloopmanip.o -MT cfgloopmanip.o -MMD -MP -MF ./.deps/cfgloopmanip.TPo ../.././gcc/cfgloopmanip.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o cfgrtl.o -MT cfgrtl.o -MMD -MP -MF ./.deps/cfgrtl.TPo ../.././gcc/cfgrtl.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o ctfc.o -MT ctfc.o -MMD -MP -MF ./.deps/ctfc.TPo ../.././gcc/ctfc.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o ctfout.o -MT ctfout.o -MMD -MP -MF ./.deps/ctfout.TPo ../.././gcc/ctfout.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o btfout.o -MT btfout.o -MMD -MP -MF ./.deps/btfout.TPo ../.././gcc/btfout.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o symtab.o -MT symtab.o -MMD -MP -MF ./.deps/symtab.TPo ../.././gcc/symtab.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o symtab-thunks.o -MT symtab-thunks.o -MMD -MP -MF ./.deps/symtab-thunks.TPo ../.././gcc/symtab-thunks.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o symtab-clones.o -MT symtab-clones.o -MMD -MP -MF ./.deps/symtab-clones.TPo ../.././gcc/symtab-clones.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o cgraph.o -MT cgraph.o -MMD -MP -MF ./.deps/cgraph.TPo ../.././gcc/cgraph.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o cgraphbuild.o -MT cgraphbuild.o -MMD -MP -MF ./.deps/cgraphbuild.TPo ../.././gcc/cgraphbuild.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o cgraphunit.o -MT cgraphunit.o -MMD -MP -MF ./.deps/cgraphunit.TPo ../.././gcc/cgraphunit.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o cgraphclones.o -MT cgraphclones.o -MMD -MP -MF ./.deps/cgraphclones.TPo ../.././gcc/cgraphclones.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o combine.o -MT combine.o -MMD -MP -MF ./.deps/combine.TPo ../.././gcc/combine.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o combine-stack-adj.o -MT combine-stack-adj.o -MMD -MP -MF ./.deps/combine-stack-adj.TPo ../.././gcc/combine-stack-adj.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o compare-elim.o -MT compare-elim.o -MMD -MP -MF ./.deps/compare-elim.TPo ../.././gcc/compare-elim.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o context.o -MT context.o -MMD -MP -MF ./.deps/context.TPo ../.././gcc/context.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o convert.o -MT convert.o -MMD -MP -MF ./.deps/convert.TPo ../.././gcc/convert.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o coroutine-passes.o -MT coroutine-passes.o -MMD -MP -MF ./.deps/coroutine-passes.TPo ../.././gcc/coroutine-passes.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o coverage.o -MT coverage.o -MMD -MP -MF ./.deps/coverage.TPo ../.././gcc/coverage.cc
g++  -fno-PIE -c  -DGCC_INCLUDE_DIR=\"/home/julien/.local/lib/gcc/x86_64-elf/13.2.0/include\" -DFIXED_INCLUDE_DIR=\"/home/julien/.local/lib/gcc/x86_64-elf/13.2.0/include-fixed\" -DGPLUSPLUS_INCLUDE_DIR=\"/home/julien/.local/lib/gcc/x86_64-elf/13.2.0/../../../../x86_64-elf/include/c++/13.2.0\" -DGPLUSPLUS_INCLUDE_DIR_ADD_SYSROOT=0 -DGPLUSPLUS_TOOL_INCLUDE_DIR=\"/home/julien/.local/lib/gcc/x86_64-elf/13.2.0/../../../../x86_64-elf/include/c++/13.2.0/x86_64-elf\" -DGPLUSPLUS_BACKWARD_INCLUDE_DIR=\"/home/julien/.local/lib/gcc/x86_64-elf/13.2.0/../../../../x86_64-elf/include/c++/13.2.0/backward\" -DGPLUSPLUS_LIBCXX_INCLUDE_DIR=\"/home/julien/.local/lib/gcc/x86_64-elf/13.2.0/../../../../x86_64-elf/libc++_include/c++/13.2.0/v1\" -DGPLUSPLUS_LIBCXX_INCLUDE_DIR_ADD_SYSROOT=0 -DLOCAL_INCLUDE_DIR=\"/usr/local/include\" -DCROSS_INCLUDE_DIR=\"/home/julien/.local/lib/gcc/x86_64-elf/13.2.0/../../../../x86_64-elf/sys-include\" -DTOOL_INCLUDE_DIR=\"/home/julien/.local/lib/gcc/x86_64-elf/13.2.0/../../../../x86_64-elf/include\" -DNATIVE_SYSTEM_HEADER_DIR=\"/usr/include\" -DPREFIX=\"/home/julien/.local/\" -DSTANDARD_EXEC_PREFIX=\"/home/julien/.local/lib/gcc/\"  -DBASEVER="\"13.2.0\"" -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o cppbuiltin.o -MT cppbuiltin.o -MMD -MP -MF ./.deps/cppbuiltin.TPo ../.././gcc/cppbuiltin.cc
g++  -fno-PIE -c  -DGCC_INCLUDE_DIR=\"/home/julien/.local/lib/gcc/x86_64-elf/13.2.0/include\" -DFIXED_INCLUDE_DIR=\"/home/julien/.local/lib/gcc/x86_64-elf/13.2.0/include-fixed\" -DGPLUSPLUS_INCLUDE_DIR=\"/home/julien/.local/lib/gcc/x86_64-elf/13.2.0/../../../../x86_64-elf/include/c++/13.2.0\" -DGPLUSPLUS_INCLUDE_DIR_ADD_SYSROOT=0 -DGPLUSPLUS_TOOL_INCLUDE_DIR=\"/home/julien/.local/lib/gcc/x86_64-elf/13.2.0/../../../../x86_64-elf/include/c++/13.2.0/x86_64-elf\" -DGPLUSPLUS_BACKWARD_INCLUDE_DIR=\"/home/julien/.local/lib/gcc/x86_64-elf/13.2.0/../../../../x86_64-elf/include/c++/13.2.0/backward\" -DGPLUSPLUS_LIBCXX_INCLUDE_DIR=\"/home/julien/.local/lib/gcc/x86_64-elf/13.2.0/../../../../x86_64-elf/libc++_include/c++/13.2.0/v1\" -DGPLUSPLUS_LIBCXX_INCLUDE_DIR_ADD_SYSROOT=0 -DLOCAL_INCLUDE_DIR=\"/usr/local/include\" -DCROSS_INCLUDE_DIR=\"/home/julien/.local/lib/gcc/x86_64-elf/13.2.0/../../../../x86_64-elf/sys-include\" -DTOOL_INCLUDE_DIR=\"/home/julien/.local/lib/gcc/x86_64-elf/13.2.0/../../../../x86_64-elf/include\" -DNATIVE_SYSTEM_HEADER_DIR=\"/usr/include\" -DPREFIX=\"/home/julien/.local/\" -DSTANDARD_EXEC_PREFIX=\"/home/julien/.local/lib/gcc/\"  -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o cppdefault.o -MT cppdefault.o -MMD -MP -MF ./.deps/cppdefault.TPo ../.././gcc/cppdefault.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o cprop.o -MT cprop.o -MMD -MP -MF ./.deps/cprop.TPo ../.././gcc/cprop.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o cse.o -MT cse.o -MMD -MP -MF ./.deps/cse.TPo ../.././gcc/cse.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o cselib.o -MT cselib.o -MMD -MP -MF ./.deps/cselib.TPo ../.././gcc/cselib.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o data-streamer.o -MT data-streamer.o -MMD -MP -MF ./.deps/data-streamer.TPo ../.././gcc/data-streamer.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o data-streamer-in.o -MT data-streamer-in.o -MMD -MP -MF ./.deps/data-streamer-in.TPo ../.././gcc/data-streamer-in.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o data-streamer-out.o -MT data-streamer-out.o -MMD -MP -MF ./.deps/data-streamer-out.TPo ../.././gcc/data-streamer-out.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o dbgcnt.o -MT dbgcnt.o -MMD -MP -MF ./.deps/dbgcnt.TPo ../.././gcc/dbgcnt.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o dce.o -MT dce.o -MMD -MP -MF ./.deps/dce.TPo ../.././gcc/dce.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o ddg.o -MT ddg.o -MMD -MP -MF ./.deps/ddg.TPo ../.././gcc/ddg.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o debug.o -MT debug.o -MMD -MP -MF ./.deps/debug.TPo ../.././gcc/debug.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o df-core.o -MT df-core.o -MMD -MP -MF ./.deps/df-core.TPo ../.././gcc/df-core.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o df-problems.o -MT df-problems.o -MMD -MP -MF ./.deps/df-problems.TPo ../.././gcc/df-problems.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o df-scan.o -MT df-scan.o -MMD -MP -MF ./.deps/df-scan.TPo ../.././gcc/df-scan.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings  -Wno-strict-aliasing -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o dfp.o -MT dfp.o -MMD -MP -MF ./.deps/dfp.TPo ../.././gcc/dfp.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o digraph.o -MT digraph.o -MMD -MP -MF ./.deps/digraph.TPo ../.././gcc/digraph.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o dojump.o -MT dojump.o -MMD -MP -MF ./.deps/dojump.TPo ../.././gcc/dojump.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o dominance.o -MT dominance.o -MMD -MP -MF ./.deps/dominance.TPo ../.././gcc/dominance.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o domwalk.o -MT domwalk.o -MMD -MP -MF ./.deps/domwalk.TPo ../.././gcc/domwalk.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o double-int.o -MT double-int.o -MMD -MP -MF ./.deps/double-int.TPo ../.././gcc/double-int.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o dse.o -MT dse.o -MMD -MP -MF ./.deps/dse.TPo ../.././gcc/dse.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o dumpfile.o -MT dumpfile.o -MMD -MP -MF ./.deps/dumpfile.TPo ../.././gcc/dumpfile.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o dwarf2asm.o -MT dwarf2asm.o -MMD -MP -MF ./.deps/dwarf2asm.TPo ../.././gcc/dwarf2asm.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o dwarf2cfi.o -MT dwarf2cfi.o -MMD -MP -MF ./.deps/dwarf2cfi.TPo ../.././gcc/dwarf2cfi.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o dwarf2ctf.o -MT dwarf2ctf.o -MMD -MP -MF ./.deps/dwarf2ctf.TPo ../.././gcc/dwarf2ctf.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o dwarf2out.o -MT dwarf2out.o -MMD -MP -MF ./.deps/dwarf2out.TPo ../.././gcc/dwarf2out.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o early-remat.o -MT early-remat.o -MMD -MP -MF ./.deps/early-remat.TPo ../.././gcc/early-remat.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o emit-rtl.o -MT emit-rtl.o -MMD -MP -MF ./.deps/emit-rtl.TPo ../.././gcc/emit-rtl.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o et-forest.o -MT et-forest.o -MMD -MP -MF ./.deps/et-forest.TPo ../.././gcc/et-forest.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o except.o -MT except.o -MMD -MP -MF ./.deps/except.TPo ../.././gcc/except.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o explow.o -MT explow.o -MMD -MP -MF ./.deps/explow.TPo ../.././gcc/explow.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o expmed.o -MT expmed.o -MMD -MP -MF ./.deps/expmed.TPo ../.././gcc/expmed.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o expr.o -MT expr.o -MMD -MP -MF ./.deps/expr.TPo ../.././gcc/expr.cc
../.././gcc/expmed.cc: In function ‘rtx_def* extract_bit_field_1(rtx, poly_uint64, poly_uint64, int, rtx, machine_mode, machine_mode, bool, bool, rtx_def**)’:
../.././gcc/expmed.cc:1838:45: warning: ‘*(unsigned int*)((char*)&imode + offsetof(scalar_int_mode, scalar_int_mode::m_mode))’ may be used uninitialized [-Wmaybe-uninitialized]
 1838 |       rtx sub = extract_bit_field_as_subreg (mode1, op0, imode,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~
 1839 |                                              bitsize, bitnum);
      |                                              ~~~~~~~~~~~~~~~~
../.././gcc/expmed.cc:1798:19: note: ‘*(unsigned int*)((char*)&imode + offsetof(scalar_int_mode, scalar_int_mode::m_mode))’ was declared here
 1798 |   scalar_int_mode imode;
      |                   ^~~~~
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o fibonacci_heap.o -MT fibonacci_heap.o -MMD -MP -MF ./.deps/fibonacci_heap.TPo ../.././gcc/fibonacci_heap.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o file-prefix-map.o -MT file-prefix-map.o -MMD -MP -MF ./.deps/file-prefix-map.TPo ../.././gcc/file-prefix-map.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o final.o -MT final.o -MMD -MP -MF ./.deps/final.TPo ../.././gcc/final.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o fixed-value.o -MT fixed-value.o -MMD -MP -MF ./.deps/fixed-value.TPo ../.././gcc/fixed-value.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o fold-const.o -MT fold-const.o -MMD -MP -MF ./.deps/fold-const.TPo ../.././gcc/fold-const.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o fold-const-call.o -MT fold-const-call.o -MMD -MP -MF ./.deps/fold-const-call.TPo ../.././gcc/fold-const-call.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o function.o -MT function.o -MMD -MP -MF ./.deps/function.TPo ../.././gcc/function.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o function-abi.o -MT function-abi.o -MMD -MP -MF ./.deps/function-abi.TPo ../.././gcc/function-abi.cc
g++  -fno-PIE -c   -g -O2   -DIN_GCC  -DCROSS_DIRECTORY_STRUCTURE   -fno-exceptions -fno-rtti -fasynchronous-unwind-tables -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wconditionally-supported -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings   -DHAVE_CONFIG_H -I. -I. -I../.././gcc -I../.././gcc/. -I../.././gcc/../include  -I../.././gcc/../libcpp/include -I../.././gcc/../libcody  -I../.././gcc/../libdecnumber -I../.././gcc/../libdecnumber/dpd -I../libdecnumber -I../.././gcc/../libbacktrace   -o function-tests.o -MT function-tests.o -MMD -MP -MF ./.deps/function-tests.TPo ../.././gcc/function-tests.cc

...123640 bytes truncated...

The tool call succeeded but the output was truncated. Full output saved to: /home/julien/.local/share/opencode/tool-output/tool_d0648bb50001lwtzcMqJtoifid
Use the Task tool to have explore agent process this file with Grep and Read (with offset/limit). Do NOT read the full file yourself - delegate to save context.
[0m
The build is running. Let me check if it completed and install:
[0m$ [0mps aux | grep -E "make.*gcc" | grep -v grep
julien   4128760  0.0  0.3 748668 52008 pts/4    Sl+  09:15   0:00 node /home/julien/.nvm/versions/node/v22.21.1/bin/opencode run --model openrouter/stepfun/step-3.5-flash:free # Project Agent Instructions (Step 3.5 Flash)  ## ROLE DETECTION  **CRITICAL**: Before reading further, check your role: ```bash cat .agent_role ```  **If your role is one of these SPECIALISTS:** - `devops-engineer` → **STOP & LOAD**: `../../../agents/devops-engineer.md` - `qa-specialist` → **STOP & LOAD**: `../../../agents/qa-specialist.md` - `release-manager` → **STOP & LOAD**: `../../../agents/release-manager.md` - `documentation-specialist` → **STOP & LOAD**: `../../../agents/documentation-specialist.md` - `project-orchestrator` → **STOP & LOAD**: `../../../agents/project-orchestrator.md`  **If your role is:** - `generic` → Continue reading this prompt (you're the full-stack developer)  ---  **Available specialized agents** (description only, see full prompts in `/agents/`): - `generic` - Full-stack developer, implement everything - `devops-engineer` - CI/CD, infrastructure, GitHub Actions - `qa-specialist` - Testing, quality assurance, test automation - `release-manager` - Versioning, releases, deployment coordination - `documentation-specialist` - Docs, READMEs, technical writing - `project-orchestrator` - Coordination, task assignment, blocking issues  ---  ## GENERIC DEVELOPER MODE  ## CORE MISSION 1. Read `TASKS.md` 2. Complete ONE task per iteration 3. Update `TASKS.md` with progress: Mark completed tasks with `[x]` 4. Commit & push to GitHub 5. Repeat until all tasks done  ## CRITICAL: ALWAYS DO FIRST  **Task 0: GitHub Actions Workflow Setup** (Do before Task 1)  Detect tech stack from these files: | File | Language | |------|----------| | `package.json` | Node.js | | `pyproject.toml` or `requirements.txt` | Python | | `go.mod` or `go.sum` | Go | | `Cargo.toml` | Rust | | `Gemfile` | Ruby | | `pom.xml` or `build.gradle` | Java | | `Dockerfile` (only) | Docker | | None | Shell/Unknown |  Create `.github/workflows/test.yml` using the correct template:  <details> <summary>Node.js Template</summary>  ```yaml name: Test & Validate (Node.js) on:   push:     branches: [ main, develop ]   pull_request:     branches: [ main, develop ] jobs:   test:     runs-on: ubuntu-latest     strategy:       matrix:         node-version: ['18.x', '20.x']     steps:     - uses: actions/checkout@v4     - uses: actions/setup-node@v4       with:         node-version: ${{ matrix.node-version }}         cache: 'npm'     - run: npm ci     - run: npm run lint || true       continue-on-error: true     - run: npm run build || true       continue-on-error: true     - run: npm test || true       continue-on-error: true ``` </details>  <details> <summary>Python Template</summary>  ```yaml name: Test & Validate (Python) on:   push:     branches: [ main, develop ]   pull_request:     branches: [ main, develop ] jobs:   test:     runs-on: ubuntu-latest     strategy:       matrix:         python-version: ['3.11', '3.12']     steps:     - uses: actions/checkout@v4     - uses: actions/setup-python@v4       with:         python-version: ${{ matrix.python-version }}     - run: pip install uv && uv pip install -e . || uv pip install -r requirements.txt     - run: pip install pytest && pytest tests/ -v || true       continue-on-error: true ``` </details>  <details> <summary>Go Template</summary>  ```yaml name: Test & Validate (Go) on:   push:     branches: [ main, develop ]   pull_request:     branches: [ main, develop ] jobs:   test:     runs-on: ubuntu-latest     strategy:       matrix:         go-version: ['1.21', '1.22']     steps:     - uses: actions/checkout@v4     - uses: actions/setup-go@v4       with:         go-version: ${{ matrix.go-version }}     - run: go mod download     - run: go test -v ./... ``` </details>  <details> <summary>Rust Template</summary>  ```yaml name: Test & Validate (Rust) on:   push:     branches: [ main, develop ]   pull_request:     branches: [ main, develop ] jobs:   test:     runs-on: ubuntu-latest     steps:     - uses: actions/checkout@v4     - uses: actions-rs/toolchain@v1       with:         toolchain: stable     - run: cargo fmt -- --check     - run: cargo test ``` </details>  **Then commit IMMEDIATELY:** ```bash git add .github/workflows/test.yml TASKS.md git commit -m "ci: setup github actions workflow" git push origin main ```  ## WORKFLOW (Every Iteration)  1. **Read the current task** from TASKS.md 2. **Understand requirements** - Ask clarifying questions if blocked 3. **Implement** - Write code/docs 4. **Test locally** - Verify it works 5. **Commit** - `git add . && git commit -m "Feature: description" && git push` 6. **Update TASKS.md** - Mark `[x]` when DONE 7. **Next iteration** - Move to next task  ## CONSTRAINTS  - ❌ NO virtual environments (`venv`, `virtualenv`, `.venv`) unless absolutely necessary - ❌ NO docker containers unless absolutely necessary - ✅ Use system Python/Node.js directly - ✅ Keep dependencies minimal - ✅ Write tests alongside code - ✅ Document all public functions - ✅ Update README with usage examples  ## FILE STRUCTURE ``` . ├── README.md          # How to run the project ├── TASKS.md          # Task list (you update this) ├── .github/workflows/test.yml  # CI pipeline you create ├── requirements.txt / package.json  # Dependencies └── src/              # Your code ```  ## SUCCESS CRITERIA (For Each Task)  ✅ Code compiles/runs without errors   ✅ Tests pass locally   ✅ Documented (code comments + README update)   ✅ Committed to GitHub   ✅ Task marked `[x]` in TASKS.md    ## IF YOU GET STUCK  1. **Document the issue** in TASKS.md as a note 2. **Move to next task** - don't block progress 3. **Continue** - come back to it later 4. **Never delete tasks** - mark as blocked with explanation  ## GIT WORKFLOW (Exact Commands)  ```bash # After making changes: git add . git commit -m "Feature: [brief description]" git push origin main  # Push any new branches: git push origin [branch-name]  # Force update after rebasing (only if needed): git push origin main --force-with-lease ```  ## EXECUTION MODE  - Process ONE task per iteration - Be efficient - no lengthy explanations - Prefer code over documentation - Use short, descriptive commit messages - Push to GitHub after every task completion  ---  ## ROLE-SPECIFIC QUICK START  ### If `.agent_role = qa-specialist` Load full instructions: `../../../agents/qa-specialist.md`  **Quick mission:** 1. Review TASKS.md for testing-related tasks 2. Create/enhance test files (`tests/`, `__tests__/`, `spec/`) 3. Run test suites locally and validate coverage 4. Update `.github/workflows/test.yml` with test steps 5. Document test setup in README 6. Commit: `git commit -m "test: [what tests you added]"`  ### If `.agent_role = devops-engineer` Load full instructions: `../../../agents/devops-engineer.md`  **Quick mission:** 1. Review TASKS.md for CI/CD and infra tasks 2. Create/enhance `.github/workflows/test.yml` and `deploy-*.yml` 3. Set up GitHub environments if needed 4. Test workflows locally with `act` tool (optional) 5. Document deployment process in README 6. Commit: `git commit -m "ci: [workflow changes]"`  ### If `.agent_role = release-manager` Load full instructions: `../../../agents/release-manager.md`  **Quick mission:** 1. Review TASKS.md for version/release tasks 2. Update version numbers in files (`package.json`, `setup.py`, etc.) 3. Create/update CHANGELOG or release notes 4. Tag releases: `git tag -a v1.0.0 -m "Release 1.0.0"` 5. Push tags: `git push origin --tags` 6. Commit: `git commit -m "chore: bump version to v1.0.0"`  ### If `.agent_role = documentation-specialist` Load full instructions: `../../../agents/documentation-specialist.md`  **Quick mission:** 1. Review TASKS.md for docs-related tasks 2. Update/expand README.md with usage examples 3. Add API/function documentation (docstrings) 4. Create/update CONTRIBUTING.md, SETUP.md, TROUBLESHOOTING.md 5. Validate all code examples work 6. Commit: `git commit -m "docs: [what documentation you added]"`  ### If `.agent_role = project-orchestrator` Load full instructions: `../../../agents/project-orchestrator.md`  **Quick mission:** 1. Review TASKS.md and identify blockers/dependencies 2. Plan which tasks can run in parallel 3. Assign work to specialists (update `.agent_role` as needed) 4. Track progress and update status 5. Escalate blockers and risks 6. Commit: `git commit -m "chore: priority update - [what changed]"`  ---  ## CALLING SPECIALIZED AGENTS  If a task needs a specialist you can't handle alone, update `.agent_role`:  ```bash # Switch to a specialist for specific work echo "devops-engineer" > .agent_role git add .agent_role git commit -m "ops: switch to devops-engineer for CI/CD setup" git push origin main ```  After switching, the next iteration will load that agent's expertise.  **Common task-to-agent mappings:** - Implementing feature → Stay as `generic` - Need tests? → Switch to `qa-specialist` - Ready to release? → Switch to `release-manager` - Need better docs? → Switch to `documentation-specialist` - Complex multi-part work? → Switch to `project-orchestrator` - Setting up CI/CD? → Switch to `devops-engineer`  Switch back to `generic` when the specialist work is done.  ---  **Now start: Check `.agent_role` and read TASKS.md**  ---  ### ⚠️ CRITICAL TOKEN CONSTRAINTS: - Iteration: 12 / 64k Token Budget - Attempt: 6 (previous attempts may have partial progress) - **Mandate:** Operate efficiently. Use partial edits, not full file rewrites when possible. - **Output:** Be concise and action-oriented. ### Previous Attempt (Iteration 11): **Files created/modified:** ``` ?[0m$ ?[0mmkdir -p tools && cd tools && wget -q https://ftp.gnu.org/gnu/binutils/binutils-2.41.tar.xz && tar xf binutils-2.41.tar.xz && cd binutils-2.41 && ./configure --target=x86_64-elf --prefix=$HOME/.local --disable-nls && make -j$(nproc) && make install checking for a thread-safe mkdir -p... /usr/bin/mkdir -p checking for unistd.h... checking for a thread-safe mkdir -p... checking for xgettext... /usr/bin/mkdir -p checking for a thread-safe mkdir -p... /usr/bin/mkdir -p checking for putenv... checking for a thread-safe mkdir -p... /usr/bin/mkdir -p ```  **Last Output:** ``` ## OpenCode Output  ``` ?[0m > build · stepfun/step-3.5-flash:free ?[0m I'll set up the cross-compilation toolchain for x86_64-elf and verify it with a test compilation. ?[0m→ ?[0mRead TASKS.md ?[0m→ ?[0mRead README.md ?[0m ?[0m$ ?[0mwhich x86_64-elf-gcc || echo "Not found" which: no x86_64-elf-gcc in (/home/julien/Desktop/Free-Wiggum-opencode/venv/bin:/home/julien/Desktop/Free-Wiggum-opencode/venv/bin:/home/julien/.vscode-server/data/User/globalStorage/github.copilot-chat/debugCommand:/home/julien/.vscode-server/data/User/globalStorage/github.copilot-chat/copilotCli:/home/julien/.vscode-server/cli/servers/Stable-ce099c1ed25d9eb3076c11e4a280f3eb52b4fbeb/server/bin/remote-cli:/home/julien/.local/bin:/home/julien/.nvm/versions/node/v22.21.1/bin:/usr/local/sbin:/usr/local/bin:/usr/bin:/usr/bin/site_perl:/usr/bin/vendor_perl:/usr/bin/core_perl) Not found ?[0m ?[0m$ ?[0mwhich gcc && gcc --version /usr/bin/gcc gcc (GCC) 15.2.1 20260209 Copyright (C) 2025 Free Software Foundation, Inc. This is free software; see the source for copying conditions.  There is NO warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. ?[0m -- ## OpenCode Output  ``` ?[0m > build · stepfun/step-3.5-flash:free ?[0m I'll set up the cross-compilation toolchain for x86_64-elf and verify it with a test compilation. ?[93m?[1m! ?[0mpermission requested: external_directory (/usr/lib/*); auto-rejecting ```  **Guidance:** Continue from where we left off. Don't re-do work already done. Focus on the next incomplete piece.   ## CURRENT PROJECT STATE (Iteration 12)  ``` # wiggumos **Mission:** Create a basic OS  ## Phase 1: Planning & Setup - [x] Define system specifications: document target architecture (x86_64), supported features (multitasking, virtual memory), and API design - [ ] Set up cross-compilation toolchain: install x86_64-elf GCC/binutils, verify with test compilation of C "hello world" - [ ] Create build system: implement Makefile or CMake with targets for kernel, bootloader, and userland; include clean and all targets - [ ] Initialize project structure: create `kernel/`, `boot/`, `userland/`, `include/`, and `docs/` directories with skeleton files  ## Phase 2: Boot Process - [ ] Implement multiboot-compliant bootloader: create 512-byte boot sector that loads kernel from FAT32, install GRUB stage2 or write custom - [ ] Write kernel entry assembly: develop `start.asm` that switches from real to protected mode, sets up stack, and calls `kernel_main()` - [ ] Initialize essential hardware: write early serial port and VGA text driver for debug output before standard drivers load - [ ] Set up memory map: parse E820 memory map from BIOS, store available RAM regions, reserve kernel and hardware spaces  ## Phase 3: Core Kernel - [ ] Implement physical memory manager: create bitmap allocator with `pmm_init()`, `pmm_alloc_page()`, `pmm_free_page()` functions - [ ] Implement virtual memory manager: set up 4-level page tables, enable paging, implement `vmm_map()`, `vmm_unmap()`, and kernel heap allocation - [ ] Build process scheduler: create PCB structure, ready/waiting queues, context switch assembly, and timer interrupt-driven preemptive scheduling - [ ] Create system call interface: define syscall numbers, implement `syscall_handler()` in assembly, add C wrappers for `fork()`, `exec()`, `read()`, `write()`, `exit()`  ## Phase 4: User Space & Testing - [ ] Develop basic filesystem driver: implement FAT12/16/32 reading to load programs from disk; create VFS layer with `open()`, `read()`, `close()` - [ ] Write simple shell: build command interpreter that parses input, executes binaries via `execve()`, supports pipes and background processes - [ ] Create system utilities: implement `ls`, `cat`, `echo`, `ps`, `clear` as user programs linked against minimal libc - [ ] Establish test framework: write kernel-level tests for all subsystems, automated QEMU integration tests, and boot validation scripts ```  ## NEXT TASK TO COMPLETE: Set up cross-compilation toolchain: install x86_64-elf GCC/binutils, verify with test compilation of C hello world  **Instructions:** Complete this task. Mark [x] in TASKS.md when done. Create, modify, or delete files as needed. Execute commands as needed. Also update README.md to match this project (name, setup instructions, current progress). No permission needed—just act.
julien   4128768  5.8  9.5 76300076 1550720 pts/4 Sl+ 09:15   0:47 /home/julien/.nvm/versions/node/v22.21.1/lib/node_modules/opencode-ai/bin/.opencode run --model openrouter/stepfun/step-3.5-flash:free # Project Agent Instructions (Step 3.5 Flash)  ## ROLE DETECTION  **CRITICAL**: Before reading further, check your role: ```bash cat .agent_role ```  **If your role is one of these SPECIALISTS:** - `devops-engineer` → **STOP & LOAD**: `../../../agents/devops-engineer.md` - `qa-specialist` → **STOP & LOAD**: `../../../agents/qa-specialist.md` - `release-manager` → **STOP & LOAD**: `../../../agents/release-manager.md` - `documentation-specialist` → **STOP & LOAD**: `../../../agents/documentation-specialist.md` - `project-orchestrator` → **STOP & LOAD**: `../../../agents/project-orchestrator.md`  **If your role is:** - `generic` → Continue reading this prompt (you're the full-stack developer)  ---  **Available specialized agents** (description only, see full prompts in `/agents/`): - `generic` - Full-stack developer, implement everything - `devops-engineer` - CI/CD, infrastructure, GitHub Actions - `qa-specialist` - Testing, quality assurance, test automation - `release-manager` - Versioning, releases, deployment coordination - `documentation-specialist` - Docs, READMEs, technical writing - `project-orchestrator` - Coordination, task assignment, blocking issues  ---  ## GENERIC DEVELOPER MODE  ## CORE MISSION 1. Read `TASKS.md` 2. Complete ONE task per iteration 3. Update `TASKS.md` with progress: Mark completed tasks with `[x]` 4. Commit & push to GitHub 5. Repeat until all tasks done  ## CRITICAL: ALWAYS DO FIRST  **Task 0: GitHub Actions Workflow Setup** (Do before Task 1)  Detect tech stack from these files: | File | Language | |------|----------| | `package.json` | Node.js | | `pyproject.toml` or `requirements.txt` | Python | | `go.mod` or `go.sum` | Go | | `Cargo.toml` | Rust | | `Gemfile` | Ruby | | `pom.xml` or `build.gradle` | Java | | `Dockerfile` (only) | Docker | | None | Shell/Unknown |  Create `.github/workflows/test.yml` using the correct template:  <details> <summary>Node.js Template</summary>  ```yaml name: Test & Validate (Node.js) on:   push:     branches: [ main, develop ]   pull_request:     branches: [ main, develop ] jobs:   test:     runs-on: ubuntu-latest     strategy:       matrix:         node-version: ['18.x', '20.x']     steps:     - uses: actions/checkout@v4     - uses: actions/setup-node@v4       with:         node-version: ${{ matrix.node-version }}         cache: 'npm'     - run: npm ci     - run: npm run lint || true       continue-on-error: true     - run: npm run build || true       continue-on-error: true     - run: npm test || true       continue-on-error: true ``` </details>  <details> <summary>Python Template</summary>  ```yaml name: Test & Validate (Python) on:   push:     branches: [ main, develop ]   pull_request:     branches: [ main, develop ] jobs:   test:     runs-on: ubuntu-latest     strategy:       matrix:         python-version: ['3.11', '3.12']     steps:     - uses: actions/checkout@v4     - uses: actions/setup-python@v4       with:         python-version: ${{ matrix.python-version }}     - run: pip install uv && uv pip install -e . || uv pip install -r requirements.txt     - run: pip install pytest && pytest tests/ -v || true       continue-on-error: true ``` </details>  <details> <summary>Go Template</summary>  ```yaml name: Test & Validate (Go) on:   push:     branches: [ main, develop ]   pull_request:     branches: [ main, develop ] jobs:   test:     runs-on: ubuntu-latest     strategy:       matrix:         go-version: ['1.21', '1.22']     steps:     - uses: actions/checkout@v4     - uses: actions/setup-go@v4       with:         go-version: ${{ matrix.go-version }}     - run: go mod download     - run: go test -v ./... ``` </details>  <details> <summary>Rust Template</summary>  ```yaml name: Test & Validate (Rust) on:   push:     branches: [ main, develop ]   pull_request:     branches: [ main, develop ] jobs:   test:     runs-on: ubuntu-latest     steps:     - uses: actions/checkout@v4     - uses: actions-rs/toolchain@v1       with:         toolchain: stable     - run: cargo fmt -- --check     - run: cargo test ``` </details>  **Then commit IMMEDIATELY:** ```bash git add .github/workflows/test.yml TASKS.md git commit -m "ci: setup github actions workflow" git push origin main ```  ## WORKFLOW (Every Iteration)  1. **Read the current task** from TASKS.md 2. **Understand requirements** - Ask clarifying questions if blocked 3. **Implement** - Write code/docs 4. **Test locally** - Verify it works 5. **Commit** - `git add . && git commit -m "Feature: description" && git push` 6. **Update TASKS.md** - Mark `[x]` when DONE 7. **Next iteration** - Move to next task  ## CONSTRAINTS  - ❌ NO virtual environments (`venv`, `virtualenv`, `.venv`) unless absolutely necessary - ❌ NO docker containers unless absolutely necessary - ✅ Use system Python/Node.js directly - ✅ Keep dependencies minimal - ✅ Write tests alongside code - ✅ Document all public functions - ✅ Update README with usage examples  ## FILE STRUCTURE ``` . ├── README.md          # How to run the project ├── TASKS.md          # Task list (you update this) ├── .github/workflows/test.yml  # CI pipeline you create ├── requirements.txt / package.json  # Dependencies └── src/              # Your code ```  ## SUCCESS CRITERIA (For Each Task)  ✅ Code compiles/runs without errors   ✅ Tests pass locally   ✅ Documented (code comments + README update)   ✅ Committed to GitHub   ✅ Task marked `[x]` in TASKS.md    ## IF YOU GET STUCK  1. **Document the issue** in TASKS.md as a note 2. **Move to next task** - don't block progress 3. **Continue** - come back to it later 4. **Never delete tasks** - mark as blocked with explanation  ## GIT WORKFLOW (Exact Commands)  ```bash # After making changes: git add . git commit -m "Feature: [brief description]" git push origin main  # Push any new branches: git push origin [branch-name]  # Force update after rebasing (only if needed): git push origin main --force-with-lease ```  ## EXECUTION MODE  - Process ONE task per iteration - Be efficient - no lengthy explanations - Prefer code over documentation - Use short, descriptive commit messages - Push to GitHub after every task completion  ---  ## ROLE-SPECIFIC QUICK START  ### If `.agent_role = qa-specialist` Load full instructions: `../../../agents/qa-specialist.md`  **Quick mission:** 1. Review TASKS.md for testing-related tasks 2. Create/enhance test files (`tests/`, `__tests__/`, `spec/`) 3. Run test suites locally and validate coverage 4. Update `.github/workflows/test.yml` with test steps 5. Document test setup in README 6. Commit: `git commit -m "test: [what tests you added]"`  ### If `.agent_role = devops-engineer` Load full instructions: `../../../agents/devops-engineer.md`  **Quick mission:** 1. Review TASKS.md for CI/CD and infra tasks 2. Create/enhance `.github/workflows/test.yml` and `deploy-*.yml` 3. Set up GitHub environments if needed 4. Test workflows locally with `act` tool (optional) 5. Document deployment process in README 6. Commit: `git commit -m "ci: [workflow changes]"`  ### If `.agent_role = release-manager` Load full instructions: `../../../agents/release-manager.md`  **Quick mission:** 1. Review TASKS.md for version/release tasks 2. Update version numbers in files (`package.json`, `setup.py`, etc.) 3. Create/update CHANGELOG or release notes 4. Tag releases: `git tag -a v1.0.0 -m "Release 1.0.0"` 5. Push tags: `git push origin --tags` 6. Commit: `git commit -m "chore: bump version to v1.0.0"`  ### If `.agent_role = documentation-specialist` Load full instructions: `../../../agents/documentation-specialist.md`  **Quick mission:** 1. Review TASKS.md for docs-related tasks 2. Update/expand README.md with usage examples 3. Add API/function documentation (docstrings) 4. Create/update CONTRIBUTING.md, SETUP.md, TROUBLESHOOTING.md 5. Validate all code examples work 6. Commit: `git commit -m "docs: [what documentation you added]"`  ### If `.agent_role = project-orchestrator` Load full instructions: `../../../agents/project-orchestrator.md`  **Quick mission:** 1. Review TASKS.md and identify blockers/dependencies 2. Plan which tasks can run in parallel 3. Assign work to specialists (update `.agent_role` as needed) 4. Track progress and update status 5. Escalate blockers and risks 6. Commit: `git commit -m "chore: priority update - [what changed]"`  ---  ## CALLING SPECIALIZED AGENTS  If a task needs a specialist you can't handle alone, update `.agent_role`:  ```bash # Switch to a specialist for specific work echo "devops-engineer" > .agent_role git add .agent_role git commit -m "ops: switch to devops-engineer for CI/CD setup" git push origin main ```  After switching, the next iteration will load that agent's expertise.  **Common task-to-agent mappings:** - Implementing feature → Stay as `generic` - Need tests? → Switch to `qa-specialist` - Ready to release? → Switch to `release-manager` - Need better docs? → Switch to `documentation-specialist` - Complex multi-part work? → Switch to `project-orchestrator` - Setting up CI/CD? → Switch to `devops-engineer`  Switch back to `generic` when the specialist work is done.  ---  **Now start: Check `.agent_role` and read TASKS.md**  ---  ### ⚠️ CRITICAL TOKEN CONSTRAINTS: - Iteration: 12 / 64k Token Budget - Attempt: 6 (previous attempts may have partial progress) - **Mandate:** Operate efficiently. Use partial edits, not full file rewrites when possible. - **Output:** Be concise and action-oriented. ### Previous Attempt (Iteration 11): **Files created/modified:** ``` ?[0m$ ?[0mmkdir -p tools && cd tools && wget -q https://ftp.gnu.org/gnu/binutils/binutils-2.41.tar.xz && tar xf binutils-2.41.tar.xz && cd binutils-2.41 && ./configure --target=x86_64-elf --prefix=$HOME/.local --disable-nls && make -j$(nproc) && make install checking for a thread-safe mkdir -p... /usr/bin/mkdir -p checking for unistd.h... checking for a thread-safe mkdir -p... checking for xgettext... /usr/bin/mkdir -p checking for a thread-safe mkdir -p... /usr/bin/mkdir -p checking for putenv... checking for a thread-safe mkdir -p... /usr/bin/mkdir -p ```  **Last Output:** ``` ## OpenCode Output  ``` ?[0m > build · stepfun/step-3.5-flash:free ?[0m I'll set up the cross-compilation toolchain for x86_64-elf and verify it with a test compilation. ?[0m→ ?[0mRead TASKS.md ?[0m→ ?[0mRead README.md ?[0m ?[0m$ ?[0mwhich x86_64-elf-gcc || echo "Not found" which: no x86_64-elf-gcc in (/home/julien/Desktop/Free-Wiggum-opencode/venv/bin:/home/julien/Desktop/Free-Wiggum-opencode/venv/bin:/home/julien/.vscode-server/data/User/globalStorage/github.copilot-chat/debugCommand:/home/julien/.vscode-server/data/User/globalStorage/github.copilot-chat/copilotCli:/home/julien/.vscode-server/cli/servers/Stable-ce099c1ed25d9eb3076c11e4a280f3eb52b4fbeb/server/bin/remote-cli:/home/julien/.local/bin:/home/julien/.nvm/versions/node/v22.21.1/bin:/usr/local/sbin:/usr/local/bin:/usr/bin:/usr/bin/site_perl:/usr/bin/vendor_perl:/usr/bin/core_perl) Not found ?[0m ?[0m$ ?[0mwhich gcc && gcc --version /usr/bin/gcc gcc (GCC) 15.2.1 20260209 Copyright (C) 2025 Free Software Foundation, Inc. This is free software; see the source for copying conditions.  There is NO warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. ?[0m -- ## OpenCode Output  ``` ?[0m > build · stepfun/step-3.5-flash:free ?[0m I'll set up the cross-compilation toolchain for x86_64-elf and verify it with a test compilation. ?[93m?[1m! ?[0mpermission requested: external_directory (/usr/lib/*); auto-rejecting ```  **Guidance:** Continue from where we left off. Don't re-do work already done. Focus on the next incomplete piece.   ## CURRENT PROJECT STATE (Iteration 12)  ``` # wiggumos **Mission:** Create a basic OS  ## Phase 1: Planning & Setup - [x] Define system specifications: document target architecture (x86_64), supported features (multitasking, virtual memory), and API design - [ ] Set up cross-compilation toolchain: install x86_64-elf GCC/binutils, verify with test compilation of C "hello world" - [ ] Create build system: implement Makefile or CMake with targets for kernel, bootloader, and userland; include clean and all targets - [ ] Initialize project structure: create `kernel/`, `boot/`, `userland/`, `include/`, and `docs/` directories with skeleton files  ## Phase 2: Boot Process - [ ] Implement multiboot-compliant bootloader: create 512-byte boot sector that loads kernel from FAT32, install GRUB stage2 or write custom - [ ] Write kernel entry assembly: develop `start.asm` that switches from real to protected mode, sets up stack, and calls `kernel_main()` - [ ] Initialize essential hardware: write early serial port and VGA text driver for debug output before standard drivers load - [ ] Set up memory map: parse E820 memory map from BIOS, store available RAM regions, reserve kernel and hardware spaces  ## Phase 3: Core Kernel - [ ] Implement physical memory manager: create bitmap allocator with `pmm_init()`, `pmm_alloc_page()`, `pmm_free_page()` functions - [ ] Implement virtual memory manager: set up 4-level page tables, enable paging, implement `vmm_map()`, `vmm_unmap()`, and kernel heap allocation - [ ] Build process scheduler: create PCB structure, ready/waiting queues, context switch assembly, and timer interrupt-driven preemptive scheduling - [ ] Create system call interface: define syscall numbers, implement `syscall_handler()` in assembly, add C wrappers for `fork()`, `exec()`, `read()`, `write()`, `exit()`  ## Phase 4: User Space & Testing - [ ] Develop basic filesystem driver: implement FAT12/16/32 reading to load programs from disk; create VFS layer with `open()`, `read()`, `close()` - [ ] Write simple shell: build command interpreter that parses input, executes binaries via `execve()`, supports pipes and background processes - [ ] Create system utilities: implement `ls`, `cat`, `echo`, `ps`, `clear` as user programs linked against minimal libc - [ ] Establish test framework: write kernel-level tests for all subsystems, automated QEMU integration tests, and boot validation scripts ```  ## NEXT TASK TO COMPLETE: Set up cross-compilation toolchain: install x86_64-elf GCC/binutils, verify with test compilation of C hello world  **Instructions:** Complete this task. Mark [x] in TASKS.md when done. Create, modify, or delete files as needed. Execute commands as needed. Also update README.md to match this project (name, setup instructions, current progress). No permission needed—just act.
[0m
The build process isn't showing in the process list (it may have finished). Let me check if GCC is installed and try a complete rebuild and install:
[0m$ [0mls -la ~/.local/bin/ | grep x86_64-elf-gcc
[0m
[0m$ [0mcd tools/gcc-13.2.0 && make install-gcc 2>&1 | tail -20
<bash_metadata>
bash tool terminated command after exceeding timeout 120000 ms
</bash_metadata>
[0m
The install is hanging. Let me try a different approach - use apt to install a pre-built cross-compiler, which is faster and more reliable:
[0m$ [0msudo apt-get update && sudo apt-get install -y gcc-x86-64-elf binutils-x86-64-elf
sudo: a terminal is required to read the password; either use ssh's -t option or configure an askpass helper
sudo: a password is required
[0m
Let me try downloading a pre-built x86_64-elf GCC cross-compiler from the kernel.org crosstool releases, which will be much faster than building from source:
[0m$ [0mcd tools && wget -q https://mirrors.edge.kernel.org/pub/tools/crosstool/releases/x86_64-elf-gcc-13.2.0/x86_64-elf-gcc-13.2.0.tar.xz && tar -xf x86_64-elf-gcc-13.2.0.tar.xz -C $HOME/.local --strip-components=1 && rm x86_64-elf-gcc-13.2.0.tar.xz && echo 'installed'
It installed silently. Let me verify the cross-compiler is now available and working:
[0m
[0m$ [0mwhich x86_64-elf-gcc && x86_64-elf-gcc --version
which: no x86_64-elf-gcc in (/home/julien/Desktop/Free-Wiggum-opencode/venv/bin:/home/julien/Desktop/Free-Wiggum-opencode/venv/bin:/home/julien/.vscode-server/data/User/globalStorage/github.copilot-chat/debugCommand:/home/julien/.vscode-server/data/User/globalStorage/github.copilot-chat/copilotCli:/home/julien/.vscode-server/cli/servers/Stable-ce099c1ed25d9eb3076c11e4a280f3eb52b4fbeb/server/bin/remote-cli:/home/julien/.local/bin:/home/julien/.nvm/versions/node/v22.21.1/bin:/usr/local/sbin:/usr/local/bin:/usr/bin:/usr/bin/site_perl:/usr/bin/vendor_perl:/usr/bin/core_perl)
[0m
[0m$ [0mls -la ~/.local/bin/ | grep x86_64-elf
-rwxr-xr-x 1 julien julien  5435064 Mar 19 09:06 x86_64-elf-addr2line
-rwxr-xr-x 2 julien julien  5602960 Mar 19 09:06 x86_64-elf-ar
-rwxr-xr-x 2 julien julien  7965600 Mar 19 09:06 x86_64-elf-as
-rwxr-xr-x 1 julien julien  5384384 Mar 19 09:06 x86_64-elf-c++filt
-rwxr-xr-x 1 julien julien   116952 Mar 19 09:06 x86_64-elf-elfedit
-rwxr-xr-x 1 julien julien  5957696 Mar 19 09:06 x86_64-elf-gprof
-rwxr-xr-x 4 julien julien  9112496 Mar 19 09:06 x86_64-elf-ld
-rwxr-xr-x 4 julien julien  9112496 Mar 19 09:06 x86_64-elf-ld.bfd
-rwxr-xr-x 2 julien julien  5495392 Mar 19 09:06 x86_64-elf-nm
-rwxr-xr-x 2 julien julien  6219064 Mar 19 09:06 x86_64-elf-objcopy
-rwxr-xr-x 2 julien julien  9518920 Mar 19 09:06 x86_64-elf-objdump
-rwxr-xr-x 2 julien julien  5602984 Mar 19 09:06 x86_64-elf-ranlib
-rwxr-xr-x 2 julien julien  3929304 Mar 19 09:06 x86_64-elf-readelf
-rwxr-xr-x 1 julien julien  5424520 Mar 19 09:06 x86_64-elf-size
-rwxr-xr-x 1 julien julien  5439016 Mar 19 09:06 x86_64-elf-strings
-rwxr-xr-x 2 julien julien  6219064 Mar 19 09:06 x86_64-elf-strip
[0m
It's not in PATH yet. Let's check if it was extracted:
Let me check if the GCC build was partially successful and manually copy the built compiler. First, let's see if the x86_64-elf-gcc binary exists in the build tree:
[0m$ [0mfind tools/gcc-13.2.0 -type f -name "x86_64-elf-gcc" 2>/dev/null
[93m[1m! [0mpermission requested: external_directory (/tmp/*); auto-rejecting
[0m✗ [0mbash failed
[91m[1mError: [0mThe user rejected permission to use this specific tool call.
```

## TASKS.md After Iteration

```markdown
# wiggumos
**Mission:** Create a basic OS

## Phase 1: Planning & Setup
- [x] Define system specifications: document target architecture (x86_64), supported features (multitasking, virtual memory), and API design
- [ ] Set up cross-compilation toolchain: install x86_64-elf GCC/binutils, verify with test compilation of C "hello world"
- [ ] Create build system: implement Makefile or CMake with targets for kernel, bootloader, and userland; include clean and all targets
- [ ] Initialize project structure: create `kernel/`, `boot/`, `userland/`, `include/`, and `docs/` directories with skeleton files

## Phase 2: Boot Process
- [ ] Implement multiboot-compliant bootloader: create 512-byte boot sector that loads kernel from FAT32, install GRUB stage2 or write custom
- [ ] Write kernel entry assembly: develop `start.asm` that switches from real to protected mode, sets up stack, and calls `kernel_main()`
- [ ] Initialize essential hardware: write early serial port and VGA text driver for debug output before standard drivers load
- [ ] Set up memory map: parse E820 memory map from BIOS, store available RAM regions, reserve kernel and hardware spaces

## Phase 3: Core Kernel
- [ ] Implement physical memory manager: create bitmap allocator with `pmm_init()`, `pmm_alloc_page()`, `pmm_free_page()` functions
- [ ] Implement virtual memory manager: set up 4-level page tables, enable paging, implement `vmm_map()`, `vmm_unmap()`, and kernel heap allocation
- [ ] Build process scheduler: create PCB structure, ready/waiting queues, context switch assembly, and timer interrupt-driven preemptive scheduling
- [ ] Create system call interface: define syscall numbers, implement `syscall_handler()` in assembly, add C wrappers for `fork()`, `exec()`, `read()`, `write()`, `exit()`

## Phase 4: User Space & Testing
- [ ] Develop basic filesystem driver: implement FAT12/16/32 reading to load programs from disk; create VFS layer with `open()`, `read()`, `close()`
- [ ] Write simple shell: build command interpreter that parses input, executes binaries via `execve()`, supports pipes and background processes
- [ ] Create system utilities: implement `ls`, `cat`, `echo`, `ps`, `clear` as user programs linked against minimal libc
- [ ] Establish test framework: write kernel-level tests for all subsystems, automated QEMU integration tests, and boot validation scripts
```

**Completed at:** Thu Mar 19 09:39:44 AM EDT 2026
