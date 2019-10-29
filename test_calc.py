import unittest
from calc import add, sub

class testCalc(unittest.TestCase):
	def test_add(self):
		self.assertEqual(add(2,3),5)

	def test_sub(self):
		self.assertEqual(sub(3,2),1)

if __name__=='__main__':
	unittest.main()