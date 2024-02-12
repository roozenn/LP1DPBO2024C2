class Human:
    def __init__(self, id, name, bidang, partai):
        self.id = id
        self.name = name
        self.bidang = bidang
        self.partai = partai

    def __str__(self):
        return f"{self.id} {self.name} {self.bidang} {self.partai}"