from subprocess import run, PIPE

path2bin = "src/variadic"

def test_case1():
    p = run([path2bin], stdout=PIPE, input="1\n", encoding="ascii")
    print(p.stdout);

    check = "Correct Answer\nCorrect Answer\nCorrect Answer\n"
    assert p.stdout==check
