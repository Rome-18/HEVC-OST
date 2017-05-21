# Introduction
High Efficiency Video Coding (HEVC) is the most recent video coding standard aiming to further reduce the bitrate by 50\% as compared to the state-of-the-art H.264/Advanced Video Coding under the same visual quality. In order to achieve this, a number of advanced coding techniques have been adopted in HEVC, including the quadtree structure of Coding Unit (CU), Prediction Unit (PU) and Transform Unit (TU), etc. However, these coding techniques lead to a tremendous increase in HEVC encoding computations. In order to reduce the HEVC encoding computational complexity, the optimal stopping theory is employed herein to design an efficient algorithm to optimize the decision making process when choosing the best coding parameters of CU, PU and TU. Extensive comparative experimental results are performed by the proposed algorithm and another two recent works, which demonstrate that the proposed algorithm is very efficient and better in reducing the HEVC encoding computations while keeping the video quality and compression efficiency almost intact.

# Installation
In mac/linux,
```
cd build/linux
make release
```
Then the execution files will be generated in ```bin/```

# Execution
The detailed configuration information is defined in configuration files, which are in ```cfg/```. To encode the video data, the command is like
```
cd bin/
./TAppEncoderStatic -c ../cfg/encoder_randomaccess_main.cfg -c ../cfg/per-sequence/RaceHorses.cfg
```
