# Undergraduate Engineering Projects

Coursework, labs and team projects from my B.Tech in Automation and Robotics Engineering at Amrita Vishwa Vidyapeetham, Amritapuri (2022–2026). They cover control-systems simulation, Finite Element Analysis (FEA), C programming, data science, design thinking and manufacturing. My robotics research is in separate repositories (see [Related](#related)).

| Folder | Course / topic | What's inside |
|---|---|---|
| [`MATLAB Control/`](MATLAB%20Control) | Control systems lab | ODE models and time responses in MATLAB |
| [`FEA Analysis/`](FEA%20Analysis) | 21ARE203 Mechanics of Materials (team project) | ANSYS studies and the report |
| [`C project/`](C%20project) | C programming | *The Incredible Journey*: a console travel planner |
| [`data-science python books/`](data-science%20python%20books) | Data science and machine learning | Jupyter notebooks |
| [`design thinking project/`](design%20thinking%20project) | 21ARE382 Design Thinking (team project) | *TrackCare*: a GPS safety system for people with memory loss |
| [`manufacturing project/`](manufacturing%20project) | 21ARE113 Manufacturing Laboratory (team project) | *Dry Mop Cleaner* build report |

---

## MATLAB Control

Spring–mass systems solved as Ordinary Differential Equations (ODEs), and responses of transfer functions to standard inputs. The `calling*` scripts integrate the matching model function (mostly with `ode45`) and plot the result.

| Lab | Files | Topic |
|---|---|---|
| 3 | `lab3/`, `lab3new/` | Undamped spring–mass system; `lab3new` runs a longer horizon (50 s) with subplots. The `.mlx` files are Live Script versions of the same code. |
| 4 | `lab4/` | Spring–mass–damper with five parameter sets (`_2` … `_5`) |
| 4 (impulse) | `lab4_dirac/` | Spring–mass–damper driven by a Dirac delta input, plus a plot of the delta approximation |
| 6 | `lab 6/` | Response of $G(s)$ to impulse, step, ramp ($t$) and $\sin 3t$ inputs; `case5`–`case8` plot closed-form time responses |
| 7 | `lab 7/FOS_unit_step.m` | Unit-step response of a first-order system $1 - e^{-t/T}$ for eight time constants $T$ |
| 9 | `lab 9/stabiltiy.m` | Stability check from the roots of the characteristic polynomial |
| – | `rot.mlx`, `test.m` | Scratch files (`test.m` is matrix-indexing practice) |

## FEA Analysis

Group project for *Mechanics of Materials* (2023–24 odd semester). The report is [`MOM project.pdf`](FEA%20Analysis/MOM%20project.pdf).

| Problem | Study |
|---|---|
| 1 | Thermal expansion of railway tracks at high temperature (ANSYS) |
| 2 | Deflection of a tyre rim under a 5335 N load |
| 3 | Deflection of a wrench under a mechanical load |
| 4 | Principal stresses for pure shear using Mohr's circle |

`work bench files/` contains the ANSYS Workbench project files (`.wbpj`). The `_files` result folders that Workbench needs to reopen them are not included, so the report is the reference for the results.

## C project

[`project.c`](C%20project/project.c) is *The Incredible Journey*, a menu-driven travel planner. You pick an Indian state, travel dates, a budget and hotel options, and it works out the stay and total cost, then asks for feedback. It is a single file that uses a three-dimensional character array for the hotel lists and pointer arguments for the cost updates.

```bash
gcc "C project/project.c" -o journey && ./journey
```

## Data-science notebooks

| Notebook | Contents |
|---|---|
| `s5_Data_Science.ipynb` | pandas data loading and merging, label and one-hot encoding with scikit-learn, and plotting with Matplotlib and Seaborn |
| `ML.ipynb` | Classic models on scikit-learn's Wine dataset: decision tree, k-nearest neighbours, linear regression, support vector machine, and k-means clustering with PCA (principal component analysis) |

## Design thinking: TrackCare

A wearable GPS tracking and alert concept for people with memory loss (for example amnesia), so that caregivers can find them quickly. This was a team project for *Design Thinking A*, submitted in January 2025.

- [`Dsn_tkn_fin_report.pdf`](design%20thinking%20project/Dsn_tkn_fin_report.pdf): the full report
- [`design thingking.pdf`](design%20thinking%20project/design%20thingking.pdf): one-page summary
- [`TRACKCARE.pptx`](design%20thinking%20project/TRACKCARE.pptx): presentation (11 slides)

## Manufacturing: Dry Mop Cleaner

A team build project for the second-semester *Manufacturing Laboratory*. The report is [`manufacturing project.pdf`](manufacturing%20project/manufacturing%20project.pdf).

---

## Related

Robotics projects from the same degree, each in its own repository:

- [ros2-mobile-manipulator-sorting](https://github.com/adithya2204/ros2-mobile-manipulator-sorting): mobile manipulator for pickup and sorting (ICRM 2025 paper)
- [led-matrix-face-controller](https://github.com/adithya2204/led-matrix-face-controller): LED face for the Nova Robot (Microcontrollers course)
- [aquashell](https://github.com/adithya2204/aquashell): underwater robot design study
- [dual-mode-weeder-amr-overview](https://github.com/adithya2204/dual-mode-weeder-amr-overview): final-year weeding robot

**Author:** Adithya Pothula, B.Tech Automation and Robotics Engineering, Amrita Vishwa Vidyapeetham
