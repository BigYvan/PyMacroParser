from PyMacroParser import  PyMacroParser
from pycallgraph import PyCallGraph
from pycallgraph.output import GraphvizOutput
from pycallgraph import Config
from pycallgraph import GlobbingFilter



def main():
    a1 = PyMacroParser()

    a1.load("b.cpp")
    a1.dumpDict()
    a1.dump('c.cpp')


if __name__ == "__main__":
    config = Config()

    config.trace_filter = GlobbingFilter(include=[
        'filterComment',
        'deelWithIfelse',
        'load',
        'preDefine',
        'deelStringtest',
        'deeltab',
        'string2other',
        'dictDataConversion',
        'dataInCpp',
        'tuple2cpp',
        'dumpDict',
        'dump',
        'tip',
    ])

    graphviz = GraphvizOutput()
    graphviz.output_file = 'graph.png'
    with PyCallGraph(output=graphviz, config=config):
        main()
