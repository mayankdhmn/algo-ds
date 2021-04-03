def earliestTime(numOfBuildings: int, buildingopenTime: List[int], offloadTime: List[int]) -> int:
    buildingopenTime.sort()
    offloadTime.sort(reverse=True)
    res = 0
    for i, time in enumerate(buildingopenTime):
        res = max(res, time + offloadTime[i*4])
    return res
