import colorama
colorama.init()

class _Colors:
    PASS = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    NAME = '\033[96m'
    ENDC = '\033[0m'

class _Smileys:
    HAPPY = ":)"
    SAD = ":("
    CONFUSED = ":S"
    NEUTRAL = ":|"

def display(testResult: str, msg: int) -> str:
    color, smiley = _selectColorAndSmiley(msg)
    msg = "{}{} {}{}".format(color, smiley, testResult, _Colors.ENDC)
    print(msg)

def _selectColorAndSmiley(bla: int) -> tuple[str, str]:
    if bla == 1:
        return _Colors.PASS, _Smileys.HAPPY
    if bla == 2:
        return _Colors.WARNING, _Smileys.CONFUSED
    if bla == 3:
        return _Colors.WARNING, _Smileys.NEUTRAL
    return _Colors.FAIL, _Smileys.SAD

for i in range(1,5):
    display("enjoy", i)
