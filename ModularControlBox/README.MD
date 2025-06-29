# Modular Control Box

This repo contains the proof-of-concept files from my **DroidCon 2025** talk:  
🎤 **“Taking Control – Design Considerations for Your Droid’s Nervous System”** – *Jim Butts*

It introduces a modular, stackable enclosure system that separates your droid’s electronics into focused, easy-to-swap modules—making your build safer, more maintainable, and beginner-friendly.

📄 [Slides from the talk](./2025_droidcon_jbutts_slides.pdf)  
🎥 [Watch the talk](https://www.youtube.com/live/2-8KAig02zo)

---

## ⚠️ Safety & Usage Notes

> **Warning:** This is a **friction-fit prototype** designed for learning and demonstration.  
> It is **not mechanically secure** enough for use inside a moving droid or high-vibration environment **as-is**.

If you plan to use these enclosures in an operational robot, you’ll need to **reinforce them**—with hardware, adhesives, or enclosure modifications—for safety and durability.

---

## 🔧 What's Inside

### `PrintFiles/Modules/`

These folders contain the STL files for each module's faceplates. Modules are stackable, tool-free, and follow a consistent enclosure size.

#### 🟥 Power Module
- **Purpose**: Distributes power to other modules and systems.
- **Connectors**: Barrel jacks, XT60s, voltmeters, switches.
- **Use Case**: Central place for switching, metering, and routing voltage safely.

#### 🟦 Motor Module
- **Purpose**: Interfaces with motor controllers like Sabertooth and SyRen.
- **Connectors**: Signal lines (PWM, serial), voltage input, XT60 motor outputs, cooling meter support.
- **Use Case**: Separates power/control lines from motors and enables safer debugging.

#### 🟩 Amp (Audio) Module
- **Purpose**: Handles audio routing between boards, amps, and speakers.
- **Connectors**: 3.5mm audio in/out, gain control, power input.
- **Use Case**: Isolates audio hardware from noisy digital or power circuits.

#### 🧠 Brain Module
- **Purpose**: Hosts your microcontroller and signal interfaces.
- **Connectors**: USB, serial, I2C, control ports, diagnostic/service panel.
- **Use Case**: Keeps logic and control wiring separate from power/motor noise.

---

### `PrintFiles/Base/`

These files define the enclosure stack system:
- **Base Plates** – Open or closed bottom options
- **Top/Bottom Rings** – Universal stackable rings
- **Feet** – Snap-on supports for stability

---

### `Diagrams/`

Reference visuals:
- Color-coded front and back views
- Connection paths and signal types
- Wiring legend and example configurations

---

## 🧠 Get Hands-On Support

This system is part of a broader effort to help people learn electronics by doing—especially if you're new, unsure, or overwhelmed.

🔧 Whether you're building this project or your own idea, join us for:
- Step-by-step guidance and demos
- Help picking parts and solving wiring issues
- STL/STEP downloads and build walkthroughs
- A supportive, beginner-friendly community

🛠️ **Join the community on Patreon**:  
👉 [https://www.patreon.com/bringmagic](https)
