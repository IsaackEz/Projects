var Table = [
    [0, 15, 10, 120, 60, 300, 60, 1, 0, 0, 0, 1440],
    [0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 5],
    [0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 5],
    [0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 1, 132],
    [1, -4, -2, -7, -3, -2, -4, 0, 0, 0, 0, 0],
];

function maximization(variable) {
    var rowX;
    var x;
    for (let j = 0; j < variable; j++) {
        var column = [];
        for (let i = 0; i < Table.length; i++) {
            var valueColumn = Table[i][j + 1];
            column.push(valueColumn);
        }
        var sum = column.reduce(function(a, b) {
            return a + b;
        }, 0);
        if (sum == 1) {
            rowX = column.indexOf(1);
            x = Table[rowX][lastRow.length - 1];
        } else {
            x = 0;
        }
        console.log("X" + j + ": ", x);
    }
    console.log("Z" + ": ", Table[Table.length - 1][lastRow.length - 1]);
}

function minimization(variable) {
    var x;
    for (let i = 0; i < variable; i++) {
        x = Table[Table.length - 1][lastRow.length - 2 - i];
        console.log("X" + i + ": ", x);
    }
    console.log("Z" + ": ", Table[Table.length - 1][lastRow.length - 1]);
}

function fillNewTable(rows, columns) {
    var newTable = [];
    for (let i = 0; i < rows; i++) {
        newTable[i] = [];
        for (let j = 0; j < columns; j++) {
            newTable[i][j] = [];
        }
    }
    return newTable;
}

var flag = 1;
while (flag != 0) {
    var radQuot = [];
    var valuePositiveRow = [];
    var positionPositiveRows = [];
    var positionPositiveRow;
    var quotPivot;
    var fPivot;
    var ePivot;
    var lastRow = Table.slice(-1)[0];
    var min_FunZ = Math.min.apply(Math, lastRow);
    var cPivot = lastRow.indexOf(min_FunZ);
    if (min_FunZ < 0) {
        var newTable = fillNewTable(5, 12);
        var xRows = Table.slice(0, -1);
        for (let i = 0; i < xRows.length; i++) {
            if (xRows[i][cPivot] > 0) {
                valuePositiveRow.push(xRows[i][cPivot]);
            } else {
                valuePositiveRow.push(0);
            }
        }
        for (let i = 0; i < valuePositiveRow.length; i++) {
            if (valuePositiveRow[i] > 0) {
                positionPositiveRows.push(
                    valuePositiveRow.indexOf(valuePositiveRow[i])
                );
                radQuot.push(Table[i][lastRow.length - 1] / Table[i][cPivot]);
                quotPivot = Math.min.apply(Math, radQuot);
                positionPositiveRow = radQuot.indexOf(quotPivot);
                fPivot = positionPositiveRows[positionPositiveRow];
            }
        }
        ePivot = Table[fPivot][cPivot];
        for (let i = 0; i < lastRow.length; i++) {
            newTable[fPivot][i] = Table[fPivot][i] / ePivot;
        }

        for (let i = 0; i < Table.length; i++) {
            if (i != fPivot) {
                for (let j = 0; j < Table[i].length; j++) {
                    newTable[i][j] =
                        Table[i][j] - Table[i][cPivot] * newTable[fPivot][j];
                }
            }
        }
    } else {
        flag = 0;
    }
    Table = newTable;
}
console.log(Table);
console.log(maximization(5));
console.log(minimization(3));