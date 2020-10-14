import requests


def fetchWeather():
    result = requests.get('https://api.seniverse.com/v3/weather/now.json?key=SMLi1RmKQt1aUUKys&location=xinyang&language=zh-Hans&unit=c')
    return result.text


if __name__ == '__main__':
    result = fetchWeather()
    print(result)
