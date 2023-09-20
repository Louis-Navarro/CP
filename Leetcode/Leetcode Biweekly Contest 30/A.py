class Solution:
    def reformatDate(self, date: str) -> str:
        date=date.split()

        year=date[-1]
        res=year+'-'

        ms=["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"]
        m=date[1]
        res+=str(ms.index(m)+1).zfill(2)

        res+='-'

        day=date[0]
        if day[1] in ('1','2','3','4','5','6','7','8','9','0'):
            res+=day[:2]
        else:
            res+=day[0].zfill(2)

        return res
