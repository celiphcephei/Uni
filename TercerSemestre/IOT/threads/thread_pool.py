from concurrent.futures import ThreadPoolExecutor

import requests

websites = [
    'http://mfa.go.th/main/',
    'http://www.mofa.gov.la/',
    'http://www.presidency.gov.gh/',
    'https://www.aph.gov.au/',
    'https://www.argentina.gob.ar/',
    'https://www.fmprc.gov.cn/mfa_eng/',
    'https://www.gcis.gov.za/',
    'https://www.gov.ro/en',
    'https://www.government.se/',
    'https://www.india.gov.in/',
    'https://www.jpf.go.jp/e/',
    'https://www.oreilly.com/',
    'https://www.parliament.nz/en/',
    'https://www.peru.gob.pe/'
]

def visit_website(url):
    """
    Makes a GET request to a website URL and prints response information
    """
    r = requests.get(url)
    print(f'{url} returned {r.status_code} after {r.elapsed} seconds')

if __name__ == '__main__':
    with ThreadPoolExecutor(max_workers=2) as executor:
        for website in websites:
            executor.submit(visit_website, website)
