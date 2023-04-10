//
//  BOJ25304.swift
//  SwiftAlgorithm
//
//  Created by 지희의 MAC on 2023/04/10.
//

/*
 import Foundation

 let total = Int(readLine()!)!
 let tc = Int(readLine()!)!
 var a = 0

 for i in 0..<tc {
     let input = readLine()!.split(separator: " ").map { Int(String($0))! }
     a += input[0]*input[1]
}
if a == total {print("Yes")} else {print("No")}
 
 
 // 개선된 풀이
let total = Int(readLine()!)!
var sum: Int = 0
for _ in 1...Int(readLine()!)! {
    sum += readLine()!.split(separator: " ").map{Int($0)!}.reduce(1,*)
}
print( total == sum ? "Yes" : "No")
*/
