## Assignment Overview
The objective of this assignment is to familiarize students with the basics of GitHub Actions by creating a simple continuous integration (CI) workflow. The workflow will automatically run Python tests whenever changes are pushed to the repository or a pull request is created.


### Procedure
In addition to GitHub action, you will need a basic understanding of Python and unit testing using the unittestLinks to an external site. module.

### Steps:
#### Set Up the Repository:

1. Create a new repository on GitHub. Name it `github-actions-python-ci`.
2. Clone the repository to your local machine:
sh
Copy code
```bash
git clone https://github.com/<your-username>/github-actions-python-ci.git cd github-actions-python-ci
```

#### Create a Simple Python Project:

Inside the repository, create a new directory called `src` and another called `tests`. 

Inside the `src` folder, create a Python file named `calculator.py` and create three functions: `add`, `subtract`, and `divide`:
```python
def add(a, b):
def subtract(a, b):
def divide (a,b):
```
Inside the `tests` folder, create a Python test file named `test_calculator.py`

You need to create two test functions with three cases in each of them. I provide the example for the test cases for the add function:
```
import unittest
from src.calculator import add, subtract, divide 
class TestCalculator(unittest.TestCase):
   def test_add(self):
    self.assertEqual(add(2, 3), 5)
    self.assertEqual(add(-1, 1), 0)
    self.assertEqual(add(-1, -1), -2)
def test_subtract(self):
  # COMPLETE HERE
def test_divide(self):
  # COMPLETE HERE
if __name__ == '__main__':
   unittest.main()
```

#### Create a GitHub Actions Workflow Using the GitHub Interface:

* Go to your repository on GitHub.
* Click on the "Actions" tab.
* Click on the "Set up a workflow yourself" link (or "New workflow" if you've already set up workflows).
* Replace the default content with the following YAML code:
 
```yaml
name: Python application
on: [push, pull_request]
jobs:
  build:
    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v3
    - name: Set up Python 3.8
      uses: actions/setup-python@v4
      with:
        python-version: 3.8
    - name: Install dependencies
      run: |
        python -m pip install --upgrade pip
    - name: Run tests
      run: |
        python -m unittest discover -s tests
```

Click the "Start commit" button, then choose "Commit directly to the main branch" and click "Commit new file".

#### Verify the Workflow:
* Go to your GitHub repository online.
* Navigate to the "Actions" tab to see the status of your workflow.
* Verify that the workflow runs and that the tests pass successfully.
* If not... make sure to adjust the workflow or the code to make it work

Send a document explaining each line of the YAML line above
Add the URL of your GitHub repository to your instructor for review.
Ensure your GitHub repository is public so that your instructor can view your workflow.
