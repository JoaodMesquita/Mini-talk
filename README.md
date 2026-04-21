*This project has been created as part of the 42 curriculum by **joapedro**.*

# 📡 Minitalk – 42 Project

## 📖 Description

**Minitalk** is a small inter-process communication (IPC) project from the 42 curriculum. The objective is to build a simple client-server system using UNIX signals.

The **client** sends a message to the **server** using only two signals:

* `SIGUSR1` → represents binary `0`
* `SIGUSR2` → represents binary `1`

Each character is broken down into bits, sent signal by signal, and then reconstructed by the server to display the original message.

This project helps develop a deeper understanding of:

* UNIX signal handling
* Bitwise operations
* Process communication at a low level

---

## ⚙️ Instructions

### 🛠️ Compilation

Clone the repository and compile the project:

```bash
git clone <git@github.com:JoaodMesquita/Mini-talk.git>
cd minitalk
make
```

This will generate:

* `server`
* `client`

---

### 🚀 Usage

#### 1. Start the server

```bash
./server
```

The server will display its **PID**. Keep it running.

---

#### 2. Send a message from the client

```bash
./client <server_pid> "Your message here"
```

Example:

```bash
./client 12345 "Hello, 42!"
```

---

## 🔄 How It Works

1. The client converts each character of the message into binary.
2. Each bit is sent as a signal:

   * `0` → `SIGUSR1`
   * `1` → `SIGUSR2`
3. The server receives signals and reconstructs bits into characters.
4. Once a full character is received (8 bits), it is printed.

## 📚 Resources

Here are some useful resources to understand the concepts behind this project:

### Signals

* `man 2 signal`
* `man 7 signal`

### Bitwise Operations

* https://www.learn-c.org/en/Bitmasks
* https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/

### Process & PID

* `man 2 getpid`
* `man 2 kill`

### Sleep & Timing (optional)

* `man 3 usleep`

### Debugging

* `gdb`

