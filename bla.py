import colorama
colorama.init()

class _Colors:
    PASS = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    NAME = '\033[96m'
    ENDC = '\033[0m'

def display(testResult: checkpy.tests.TestResult) -> str:
    color, smiley = _selectColorAndSmiley(testResult)
    msg = "{}{} {}{}".format(color, smiley, testResult.description, _Colors.ENDC)
