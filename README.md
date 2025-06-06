# CRACKme
# 🔍 Reverse Engineering Challenge - Password Protected Binary

This repository contains a simple C program that I compiled and reverse engineered using **Radare2** as part of my reverse engineering learning journey.

## 🧠 About the Binary

The original C code prompts the user for a password and only reveals a base64-encoded "flag" if the correct password is provided.

```c
if (strcmp(argv[1], pass) == 0) {
    printf("Access granted.\n");
    printf("Here is your reward: %s\n", secret);
}
```

The password is stored in the binary as an ASCII array, and the flag is encoded in Base64.

---

  <img src="https://github.com/FajrJauhar/CRACKme/Screenshot 2025-06-06 210022.png" height="550px" 

## 🎯 Objective

- Reverse engineer the binary without access to the source code.
- Retrieve the hidden password and base64-encoded secret.
- Decode the flag.
- Understand how the binary validates input.

---

## 🛠 Tools Used

- **Radare2** – for disassembly and reverse engineering
- **Ghidra** – (optionally used for decompilation)
- **base64** – for decoding the final flag
- **gcc** – for compiling the original C source

---

## ✅ Achievements

- ✅ Completed basic static analysis of the binary using Radare2
- ✅ Reconstructed the password from raw bytes
- ✅ Extracted and decoded the flag
- ✅ Gained practical experience with reverse engineering tools

---

## 📂 Files

| File           | Description                         |
|----------------|-------------------------------------|
| `challenge.c`  | Original source code (now revealed) |
| `challenge`    | Compiled Linux ELF binary           |
| `README.md`    | This documentation                  |

---

## 🧪 How to Run

```bash
gcc -o challenge challenge.c
./challenge <your_input>
```

---

## 🧠 Lessons Learned

- How to analyze ELF binaries with Radare2
- How strings and ASCII arrays are stored in memory
- How base64-encoded data can hide readable flags
- How to approach reverse engineering without source code

---

## 📌 Status

**Completed** — I’ve successfully reverse engineered this binary and now consider myself proficient in basic **Radare2** usage and static analysis techniques.

---

## 📬 Contact

If you're also learning reverse engineering or want to collaborate on similar challenges, feel free to reach out or fork the project!
