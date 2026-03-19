# Iteration 11 - wiggumos

**Timestamp:** Thu Mar 19 09:14:38 AM EDT 2026
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
- Iteration: 11 / 64k Token Budget
- Attempt: 5 (previous attempts may have partial progress)
- **Mandate:** Operate efficiently. Use partial edits, not full file rewrites when possible.
- **Output:** Be concise and action-oriented.
### Previous Attempt (Iteration 10):
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


## CURRENT PROJECT STATE (Iteration 11)

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
[0m$ [0mls -la tools/
total 26156
drwxr-xr-x  3 julien julien     4096 Mar 19 09:04 .
drwxr-xr-x  8 julien julien     4096 Mar 19 09:04 ..
drwxr-xr-x 21 julien julien     4096 Mar 19 09:04 binutils-2.41
-rw-r--r--  1 julien julien 26765692 Jul 30  2023 binutils-2.41.tar.xz
[0m
[0m$ [0mwhich x86_64-elf-gcc x86_64-elf-ld x86_64-elf-as 2>/dev/null || echo "Cross-compilation tools not in PATH yet"
/home/julien/.local/bin/x86_64-elf-ld
/home/julien/.local/bin/x86_64-elf-as
Cross-compilation tools not in PATH yet
[0m
[0m$ [0mls -la tools/binutils-2.41/ 2>/dev/null || echo "binutils-2.41 directory not found or incomplete"
total 13428
drwxr-xr-x 21 julien julien    4096 Mar 19 09:04 .
drwxr-xr-x  3 julien julien    4096 Mar 19 09:04 ..
-rwxr-xr-x  1 julien julien    5826 Jul  2  2023 ar-lib
drwxr-xr-x  7 julien julien   20480 Mar 19 09:05 bfd
drwxr-xr-x  7 julien julien    4096 Mar 19 09:06 binutils
-rw-r--r--  1 julien julien  539700 Jul  2  2023 ChangeLog
-rw-r--r--  1 julien julien 5672136 Jul  2  2023 ChangeLog.git
-rwxr-xr-x  1 julien julien    7333 Jul  2  2023 compile
drwxr-xr-x  2 julien julien    4096 Mar 19 09:04 config
-rwxr-xr-x  1 julien julien   49936 Jul  2  2023 config.guess
-rw-r--r--  1 julien julien   26330 Mar 19 09:04 config.log
-rw-r--r--  1 julien julien   25183 Jul  2  2023 config-ml.in
-rwxr-xr-x  1 julien julien   14916 Jul  2  2023 config.rpath
-rwxr-xr-x  1 julien julien   34090 Mar 19 09:04 config.status
-rwxr-xr-x  1 julien julien   35793 Jul  2  2023 config.sub
-rwxr-xr-x  1 julien julien  578117 Jul  2  2023 configure
-rw-r--r--  1 julien julien  124585 Jul  2  2023 configure.ac
-rw-r--r--  1 julien julien   18002 Jul  2  2023 COPYING
-rw-r--r--  1 julien julien   35147 Jul  2  2023 COPYING3
-rw-r--r--  1 julien julien    7639 Jul  2  2023 COPYING3.LIB
-rw-r--r--  1 julien julien   25291 Jul  2  2023 COPYING.LIB
drwxr-xr-x  2 julien julien    4096 Mar 19 09:04 cpu
-rwxr-xr-x  1 julien julien   22464 Jul  2  2023 depcomp
drwxr-xr-x  2 julien julien    4096 Mar 19 09:04 elfcpp
drwxr-xr-x  2 julien julien    4096 Mar 19 09:05 etc
drwxr-xr-x  8 julien julien    4096 Mar 19 09:06 gas
drwxr-xr-x  4 julien julien    4096 Mar 19 09:04 gold
drwxr-xr-x  5 julien julien    4096 Mar 19 09:06 gprof
drwxr-xr-x  9 julien julien    4096 Mar 19 09:04 gprofng
drwxr-xr-x 12 julien julien    4096 Mar 19 09:04 include
-rwxr-xr-x  1 julien julien   14675 Jul  2  2023 install-sh
drwxr-xr-x  2 julien julien    4096 Mar 19 09:05 intl
drwxr-xr-x 11 julien julien    4096 Mar 19 09:06 ld
drwxr-xr-x  6 julien julien    4096 Mar 19 09:06 libctf
drwxr-xr-x  4 julien julien   12288 Mar 19 09:05 libiberty
drwxr-xr-x  6 julien julien    4096 Mar 19 09:05 libsframe
-rw-r--r--  1 julien julien  264845 Jul  2  2023 libtool.m4
-rw-r--r--  1 julien julien    1768 Jul  2  2023 ltgcc.m4
-rw-r--r--  1 julien julien  249723 Jul  2  2023 ltmain.sh
-rw-r--r--  1 julien julien    6126 Jul  2  2023 lt~obsolete.m4
-rw-r--r--  1 julien julien   11950 Jul  2  2023 ltoptions.m4
-rw-r--r--  1 julien julien    4372 Jul  2  2023 ltsugar.m4
-rw-r--r--  1 julien julien     703 Jul  2  2023 ltversion.m4
-rw-r--r--  1 julien julien    3975 Jul  2  2023 MAINTAINERS
-rw-r--r--  1 julien julien  548679 Mar 19 09:04 Makefile
-rw-r--r--  1 julien julien   34297 Jul  2  2023 Makefile.def
-rw-r--r--  1 julien julien 2258100 Jul  2  2023 Makefile.in
-rw-r--r--  1 julien julien   76506 Jul  2  2023 Makefile.tpl
-rw-r--r--  1 julien julien    1087 Jul  2  2023 makefile.vms
-rwxr-xr-x  1 julien julien    6872 Jul  2  2023 missing
-rwxr-xr-x  1 julien julien    2179 Jul  2  2023 mkdep
-rwxr-xr-x  1 julien julien    3538 Jul  2  2023 mkinstalldirs
-rwxr-xr-x  1 julien julien    2636 Jul  2  2023 move-if-change
drwxr-xr-x  5 julien julien   12288 Mar 19 09:05 opcodes
-rw-r--r--  1 julien julien    1719 Jul  2  2023 README
-rw-r--r--  1 julien julien    1161 Jul  2  2023 README-maintainer-mode
-rw-r--r--  1 julien julien     210 Jul  2  2023 SECURITY.txt
-rw-r--r--  1 julien julien      13 Mar 19 09:04 serdep.tmp
-rw-r--r--  1 julien julien    1044 Jul  2  2023 setup.com
-rw-r--r--  1 julien julien 2792309 Jul  2  2023 sha256.sum
-rwxr-xr-x  1 julien julien   10963 Jul  2  2023 src-release.sh
-rwxr-xr-x  1 julien julien    2265 Jul  2  2023 symlink-tree
-rwxr-xr-x  1 julien julien    4641 Jul  2  2023 test-driver
drwxr-xr-x  2 julien julien    4096 Mar 19 09:04 texinfo
-rwxr-xr-x  1 julien julien    6421 Jul  2  2023 ylwrap
drwxr-xr-x 15 julien julien    4096 Mar 19 09:05 zlib
[0m
I need to continue setting up the cross-compilation toolchain. The previous attempt started building binutils but wasn't complete. Let me check the current state and finish the installation.
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
[0m$ [0mexport PATH="$HOME/.local/bin:$PATH" && x86_64-elf-ld --version
GNU ld (GNU Binutils) 2.41
Copyright (C) 2023 Free Software Foundation, Inc.
This program is free software; you may redistribute it under the terms of
the GNU General Public License version 3 or (at your option) a later version.
This program has absolutely no warranty.
[0m
Good! Binutils ld and as are installed in `~/.local/bin/`. Now I need to build GCC for the x86_64-elf target. Let me check if GCC was built and also verify the binutils work:
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

**Completed at:** Thu Mar 19 09:15:11 AM EDT 2026
