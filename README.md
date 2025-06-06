#Skull-Drop
<p align="center">
  <img src="https://github.com/FajrJauhar/Skull-Drop/blob/main/skull.png" height="550px" >
</p>

##  Skulldrop — Remote Keystroke Exfiltration Tool
>Second Version of PROJECT KEYSTREAMER
> Silent. Chunked. Controlled.  
> C++ Keylogger with socket-based C2 communication and log exfiltration via file chunking.  
> Designed for research and educational use only.


## ☠️ Features

### 🎛️ Skulldrop Server (C2 — Linux)
| Feature | Description |
|--------|-------------|
| Multithreaded | Handles multiple incoming connections |
| Socket Communication | Receives data via TCP on port `8080` (configurable) |
| File Chunk Reassembly | Reconstructs log files from transmitted chunks |
| Logging | Saves logs with timestamped filenames |

