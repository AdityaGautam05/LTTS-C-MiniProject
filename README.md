# C Bank - A Bank for C Programmers

[![Codacy Badge](https://app.codacy.com/project/badge/Grade/d13728e8b4324fd085aa96e3fb1c9214)](https://www.codacy.com/gh/AdityaGautam05/LTTS-C-MiniProject/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=AdityaGautam05/LTTS-C-MiniProject&amp;utm_campaign=Badge_Grade)

|Build|Unit Test|Valgrind|CPP Check|Codacy|Git Inspector|CI Coverage|
|:--:|:--:|:--:|:--:|:--:|:--:|:--:|
|[![C/C++ CI](https://github.com/AdityaGautam05/LTTS-C-MiniProject/actions/workflows/c-build.yml/badge.svg)](https://github.com/AdityaGautam05/LTTS-C-MiniProject/actions/workflows/c-build.yml)|[![Unit testing](https://github.com/AdityaGautam05/LTTS-C-MiniProject/actions/workflows/unit-test.yml/badge.svg)](https://github.com/AdityaGautam05/LTTS-C-MiniProject/actions/workflows/unit-test.yml)|[![Valgrind](https://github.com/AdityaGautam05/LTTS-C-MiniProject/actions/workflows/Valgrind.yml/badge.svg)](https://github.com/AdityaGautam05/LTTS-C-MiniProject/actions/workflows/Valgrind.yml)|[![cppcheck-action](https://github.com/AdityaGautam05/LTTS-C-MiniProject/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/AdityaGautam05/LTTS-C-MiniProject/actions/workflows/cppcheck.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/d13728e8b4324fd085aa96e3fb1c9214)](https://www.codacy.com/gh/AdityaGautam05/LTTS-C-MiniProject/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=AdityaGautam05/LTTS-C-MiniProject&amp;utm_campaign=Badge_Grade)|[![Git Inspector](https://github.com/AdityaGautam05/LTTS-C-MiniProject/actions/workflows/git-inspector.yml/badge.svg)](https://github.com/AdityaGautam05/LTTS-C-MiniProject/actions/workflows/git-inspector.yml)|[![CI-Coverage](https://github.com/AdityaGautam05/LTTS-C-MiniProject/actions/workflows/coverage.yml/badge.svg)](https://github.com/AdityaGautam05/LTTS-C-MiniProject/actions/workflows/coverage.yml)|

![](https://github.com/AdityaGautam05/LTTS-C-MiniProject/blob/main/images/CBankPoster.png)

## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`CBank/1_Requirements`   | Requirements for the project (High Level & Low Level)
`CBank/2_Architecture`         | System Architecture
`CBank/3_Implementation` | Implementation of the proposed system
`CBank/4_TestPlanAndOutput`      | Test Plan and Output of the testing procedure
`CBank/5_ImagesAndVideos`      | Images of the program execution on the local machine

## Contributors List

SF Id. |  Name   |
-------|---------|
`255955` | Aditya Gautam  |     

## Challenges Faced and How Was It Overcome
| No. | Challenge | Solution
|-----|-----------|--------
|1. | Linux doesn't have GUI system library like windows.h | Used standard library
|2. | After the execution the data stored in previous session was lost | File system was added |
|3. | Even after passing the right target on the make file github action was failing | Solved the warnings during make
|4. | Faced problems while creating the architecture diagrams | Referred to internet |
