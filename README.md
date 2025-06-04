## ![RISC-V Logo](https://upload.wikimedia.org/wikipedia/commons/6/6a/RISC-V_logo.svg) Simple RISC-V Vicuna Project

This repository includes the **Vicuna** project, which I am using to deploy **TinyML** models. I chose to instantiate Vicuna from the ground up due to the significant changes it underwent, making it important to work with a dedicated and controlled version.

The main goal is to perform efficient inference of TinyML models, leveraging the **vector extension** of Vicuna to accelerate the entire process.

Thanks to its modular and predictable environment, Vicuna is well-suited for deployment and execution on **FPGAs**. The processor has been successfully instantiated and executed on both the **ZCU104** and **ZCU7010** platforms, functioning correctly with all intended features.

---

### 📝 Original Reference

Vicuna was originally developed by:

> **Michael Platzer** and **Peter Puschner**  
> _Vicuna: A Timing-Predictable RISC-V Vector Coprocessor for Scalable Parallel Computation_  
> 33rd Euromicro Conference on Real-Time Systems (ECRTS 2021), LIPIcs, Volume 196, Pages 1:1–1:18  
> [DOI: 10.4230/LIPIcs.ECRTS.2021.1](https://doi.org/10.4230/LIPIcs.ECRTS.2021.1)  
> [Link to full paper](https://drops.dagstuhl.de/opus/volltexte/2021/13932)
