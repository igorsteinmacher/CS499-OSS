# Contribution to an Open Source Software Project

**GROUP ASSIGNMENT**

**Deadline**: MULTIPLE (KEEP YOUR EYES OPEN)

You are requested to make a significant contribution to an Open Source Software project. You will need to interact with the community and the existing code base. You MUST make a code contribution. You may start with a small contribution on documentation or translation to learn the process (although, this is not required).

The first step towards that end is choosing a project. There are a couple of them that I anticipate that can accomodate some of you (**a few more to come**):

* [animint2](https://github.com/tdhock/animint2) is an R package for making interactive animated data visualizations on the web, using ggplot syntax and two new keywords:
   - `showSelected=variable` means that only the subset of the data that corresponds to the selected value of variable will be shown.
   - `clickSelects=variable` means that clicking a plot element will change the currently selected value of variable.
Prof Toby Hocking is the main contact point for this project. More information here: https://github.com/rstats-gsoc/gsoc2023/wiki/Animated-interactive-ggplots
   - **Skills**: Requires R + JavaScript coding skills

* [DeepState](https://github.com/trailofbits/deepstate) - has multiple help wanted issues, some of which might be quite suitable for an advanced undergrad.  It's a test generation tool for C and C++, GoogleTest that allows automatic test generation, basically.  Bringing security vulnerability detection tools into the unit testing/early dev cycle is the big idea. Prof. Alex Groce can provide more info/help if students are interested. DeepState is a fairly widely used open source testing tool, and Dr. Groce is probably the main active developer now
  - They have PLENTY of good "starter" issues: https://github.com/trailofbits/deepstate/issues?q=is%3Aissue+is%3Aopen+label%3A%22good+first+issue%22
   - **Skills**: Requires Python (maybe C/C++) coding skills


* [FluxPuppy](https://github.com/bnasr/FluxPuppy) - NAU developed Android (Java) software to work with Licor 820 and 840 CO2 measurement devices. The software will be of great interests to the ecology community. --> The tasks will be available on demand, some ideas:
   - A big up here would he 
   - The current software bogs down when there are very many files in the storage system. Any navigation between screens (e.g. open file directory) it will go black for perhaps 60s. Saving leads to the same effect.
   - It is difficult to get files off the tablet, amplifying the first issue. I have only been able to make the email option work, and there is an unknown maximum amount of files which can be attached, leading to having to "batch send" files. A wired option compatible with multiple operating systems would be very convenient. Again, perhaps I am inept.
   - The voltage seems to be unreliable where I will get voltage warnings that do not match what I measure with a multimeter. E.g. I get a low battery warning 10.5 V, I measure 11.5 V.
   - The app consumes a lot of energy and then the tablet is nearly impossible to recharge in the field. An auto screen-dimming feature might be useful. I have no idea what this looks like, just an idea.
   - Newest gas analyzer has a built in pump, and would be good for Flux Puppy to be modified to control the pump
   - Opening issues explaining the tasks here and creating an appropriate contributing.md file would be a great improvement here as well!
   - **Skills**: Java mobile + UI

* [actR](https://github.com/LinkedEarth/actR) The goal of actR – the Abrupt Change Toolkit in R – is to streamline abrupt change detection, significance testing, uncertainty quantification and visualization for paleogeoscientific datasets. This project is funded by the Belmont Forum as part of the "Abrupt Changes in Climate and Ecosystems - Data & e-Infrastructure (ACCEDE)" project, as part of the Science-driven e-Infrastructure Innovation program. The project is maintained at NAU by Dr. Nicholas P. McKay. 
     - **Skills**: R

* [Jabref](http://www.github.com/Jabref/Jabref) - Citation Manager. Mainly developed in Java. JabRef people are enthusiastic about applying MVVM to their project. It is a good learning experience, and will certainly help the community. Use the wiki as a starting point for development. In addition there is an example on the JavaFX stuff regarding the MVVM pattern. Here [https://github.com/JabRef/jabref/wiki/Code---JavaFX]. 
    - **Skills**: Requires mostly Java know-how (JavaFX is a plus)

At the end of the term, it is expected that you have one or more contributions submitted, peer-evaluated (in classroom), submmited (and hopefully reviewed by project members, and accepted). Here are overall steps and dates (more details to come).

**EVERYTHING PRODUCED DURING THE COURSE NEED TO BE PEER-REVIEWED BY ANOTHER GROUP BEFORE THE FINAL SUBMISSION**

| Step                                                        | Expected deliverable                                         | Deadline  |
| ----------------------------------------------------------- | ------------------------------------------------------------ | ------- |
| Checkpoint 0                                                |||
| Checkpoint 1                                                | ||
| Checkpoint 2                                                | ||
| Checkpoint 3                                                | Final presentation <br>*can be done during office hours* |   |
| Contribution to Open Source ([Final report](#Final-Report)) | ||


*IN CASE THE PROJECT IS HOSTED ON GITHUB*: The group will need to curate a fork of the project in which they will work. All commits need to become a Pull-request in this fork to train the students on the git use and also in the GitHub use. To do so, it is recommended that you create a central fork, and each student in the group create a "sub-fork". Whenever there is a pull request ready for reviewing, the instructor (me) will assign another group to proceed with the peer review (giving them a specific deadline to do so -- be prepared to do it within the week). After receiving the OK from the peer-reviewing group, you can go ahead and create a pull request against the other project.


*IN CASE THE PROJECT IS HOSTED **OUTSIDE** GITHUB*: The group will need to curate a clone of the project in which they will work.  Whenever there is a patch ready for reviewing, the instructor (me) will assign another group to proceed with the peer review (giving them a specific deadline to do so -- be prepared to do it within the week). After receiving the OK from the peer-reviewing group, you can go ahead and submit it the way the project wants it.


### Final Report

Each group will write up a document describing the contribution process of an existing open source project, based on investigating the publicly available information about this project. This is the final deliverable of the project and can contain problems faced during the process, how did you apply your knowledge,and what kind of new skills the group acquired during this journey. It needs to present and overview of the project and the task, followed by the details of your contribution process.
