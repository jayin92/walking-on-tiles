import subprocess
import tqdm
import itertools

total_score = 0

order = [0, 1, 2, 3];
for item in itertools.permutations(order):
    for i in tqdm.tqdm(range(100)):
        file_path = "testcase/" + '0' * (4 - len(str(i))) + str(i) + '.txt';
        com = "./solve.out {} {} {} {} < {}".format(item[0], item[1], item[2], item[3], file_path)

        sub_pro = subprocess.Popen(com, shell=True, stdout=subprocess.PIPE);
        out = int(sub_pro.stdout.read())
        total_score += out
        # print(out)
    
    res = "{} Score: {}".format(item, total_score);
    print(res);
    with open("results.txt", "a") as file:
        file.write(res)