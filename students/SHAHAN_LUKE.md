# Reading Report: Modern Code Review: A Case Study at Google

## Paper Details

* **Title:** Modern Code Review: A Case Study at Google
* **Venue:** Proceedings of the 40th International Conference on Software Engineering: Software Engineering in Practice (ICSE-SEIP 2018)
* **Number of pages:** 10 pages (pp. 181–190)
* **Link to paper online:** [https://storage.googleapis.com/gweb-research2023-media/pubtools/4476.pdf](https://storage.googleapis.com/gweb-research2023-media/pubtools/4476.pdf)

---

## Summary and Key Insights

### Context and Objectives
The authors conduct an empirical case study examining how modern, lightweight, tool-based peer code review functions at scale inside Google. Using log analysis across 9 million code reviews, developer surveys, and interviews, the study investigates the motivations, developer practices, and core challenges of code review.

### Key Takeaways

1. **Beyond Defect Detection**
   While finding bugs is a common expectation, the paper shows that modern review serves broader educational and organizational roles: knowledge sharing across the team, enforcing codebase consistency and readability, and fostering maintainability.

2. **Change Size and Efficiency**
   The study underscores the critical importance of keeping code review size small (typically under 200–400 lines of code). Small change lists dramatically accelerate turnaround time, reduce cognitive burden for reviewers, and produce higher-quality feedback.

3. **Role of Automation**
   Google utilizes automated tooling (such as Critique and integrated presubmit linters/tests) to handle routine stylistic, syntax, and static verification checks before human reviewers step in. This frees engineers to focus on architectural decisions, readability, and logic correctness.
