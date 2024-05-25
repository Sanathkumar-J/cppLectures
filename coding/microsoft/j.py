import pyautogui as py
import time
def d(word):
    for i in word:
        py.typewrite(i)
        time.sleep(0.1)

strings = [
    "the quick brown fox",
    "jumps over the lazy",
    "dog and runs away",
    "from the barking cat",
    "under the blue sky",
    "over the tall fence",
    "into the green field",
    "with a happy smile",
    "on a sunny day",
    "by the flowing river"
]

time.sleep(4)
for i in strings:
    d(i)
    py.press("enter")
    time.sleep(1);