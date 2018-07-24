import os
# Please modify this command before test
# JUDGE_COMMAND = "python solve.py"
JUDGE_COMMAND = "./solve"

data = os.listdir('data')
inputfiles = filter(lambda name: name.endswith('.in'), data)
cnt, ac = 0, 0
for inputfile in inputfiles:
    cnt += 1
    if os.system(JUDGE_COMMAND+" < data/{inputfile} > tmp.out && diff -b tmp.out data/{outputfile}".format(
            inputfile=inputfile, outputfile=inputfile.replace(".in", ".out"))):
        print("Wrong answer for: {}".format(inputfile))
    else:
        ac += 1
print("{}/{}".format(ac, cnt))
