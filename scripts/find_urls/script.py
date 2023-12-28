import requests
import sys
from concurrent.futures import ThreadPoolExecutor
import urllib3
from requests.packages.urllib3.exceptions import InsecureRequestWarning

urllib3.disable_warnings(urllib3.exceptions.InsecureRequestWarning)
def load_urls(file_path):
    with open(file_path, 'r') as file:
        return [line.strip() for line in file]

def check_url(base_url, path):
    try:
        response = requests.get(base_url + path, verify=False, timeout=3)
        if response.status_code != 404:
            print(f"Found: {base_url}{path}")
    except requests.RequestException:
        # Ignoring SSL errors and other request exceptions
        pass

def main(base_url):
    common_urls = load_urls("common.txt")

    with ThreadPoolExecutor(max_workers=20) as executor:
        for path in common_urls:
            executor.submit(check_url, base_url, path)

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python dirb_like.py <base_url>")
        sys.exit(1)

    main(sys.argv[1])