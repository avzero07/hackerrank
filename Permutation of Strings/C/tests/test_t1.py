from subprocess import run, PIPE

path2bin="src/permstring"

def test_2case():
    p = run([path2bin], stdout=PIPE, input="2\nab\ncd\n", encoding='ascii')
    check="ab cd\ncd ab\n"
    print(p.stdout)
    assert check == p.stdout

def test_3case1():
    p = run([path2bin], stdout=PIPE, input="3\nab\nbc\ncd\n", encoding='ascii')
    check="ab bc cd\nab cd bc\nbc ab cd\nbc cd ab\ncd ab bc\ncd bc ab\n"
    print(p.stdout)
    assert check == p.stdout

def test_3case2():
    p = run([path2bin], stdout=PIPE, input="3\na\nbc\nbc\n", encoding='ascii')
    check="a bc bc\nbc a bc\nbc bc a\n"
    print(p.stdout)
    assert check == p.stdout
