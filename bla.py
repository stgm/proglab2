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

def display(testResult: str) -> str:
    color, smiley = _selectColorAndSmiley(testResult)
    msg = "{}{} {}{}".format(color, smiley, testResult, _Colors.ENDC)

def _selectColorAndSmiley(bla: int) -> typing.Tuple[str, str]:
    if bla == 1:
        return _Colors.PASS, _Smileys.HAPPY
    if type(testResult.message) is exception.SourceException:
        return _Colors.WARNING, _Smileys.CONFUSED
    if testResult.hasPassed is None:
        return _Colors.WARNING, _Smileys.NEUTRAL
    return _Colors.FAIL, _Smileys.SAD

display("fuck all")
