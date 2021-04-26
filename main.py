import subprocess
import tqdm
import itertools
import statistics

total_score = 0

order = [0, 1, 2, 3];
for item in itertools.permutations(order):
    total_score = 0
    test_res = []
    for i in tqdm.tqdm(range(100)):
        file_path = "testcase/" + '0' * (4 - len(str(i))) + str(i) + '.txt';
        com = "./solve.out {} {} {} {} < {}".format(item[0], item[1], item[2], item[3], file_path)

        sub_pro = subprocess.Popen(com, shell=True, stdout=subprocess.PIPE);
        
        out = int(sub_pro.stdout.read())
        print(out)
        total_score += out
        test_res.append(out)

    res = "{} Score: {}, STD: {}, {}".format(item, total_score, statistics.stdev(test_res), test_res)
    print(res)
    with open("results.txt", "a") as file:
        file.write(res+"\n")
