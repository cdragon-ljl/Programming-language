import requests
import os
url = "http://jsjx.cczu.edu.cn/_upload/article/images/8f/42/e400bbbe4bcfac6cb62778db5a07/831e8bec-1ab0-42d3-96f0-19577bbfbfe1.jpg"
root = "D://python/requests/pic//"
path = root + url.split('/')[-1]
try:
    if not os.path.exists(root):
        os.mkdir(root)
    if not os.path.exists(path):
        r = requests.get(url)
        with open(path, 'wb') as f:
            f.write(r.content)
            f.close()
            print("文件保存成功")
    else:
        print("文件已存在")
except:
    print("爬取失败")
